/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100814
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)-21502)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) : (-21LL))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1]))))));
                        arr_13 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((unsigned int) var_8)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36679)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)36679)) : (((/* implicit */int) arr_1 [i_3])))) != (min((((/* implicit */int) var_16)), (arr_9 [i_1] [i_2] [i_1] [i_1])))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_9 [(unsigned char)10] [i_0] [i_0] [i_0]) / (((/* implicit */int) (_Bool)1))))) ? (17878170164990313800ULL) : (((/* implicit */unsigned long long int) arr_9 [10] [i_0] [i_0] [10])))), (((/* implicit */unsigned long long int) arr_9 [(unsigned short)0] [(unsigned short)0] [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((unsigned short) ((arr_4 [i_0] [i_0] [i_0]) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17462))) ^ (var_7))) - (10460886400688970441ULL))))));
            var_21 = ((/* implicit */long long int) var_16);
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_17 [14U]))));
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_5] [11U]))));
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) min((((-1856402791219484294LL) % (((/* implicit */long long int) ((/* implicit */int) (short)17477))))), (((/* implicit */long long int) var_1))))) && (((/* implicit */_Bool) var_14))))));
}
