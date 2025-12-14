/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158123
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [0LL] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65529))));
        var_11 = ((/* implicit */int) ((arr_0 [i_0] [(signed char)0]) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_0))))), (max((arr_3 [i_0]), (arr_3 [i_0])))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] &= ((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_1 [i_0] [i_2])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (arr_7 [i_1] [i_2]))))), (((/* implicit */unsigned int) ((unsigned short) arr_5 [i_2 + 1] [i_2])))));
                        var_12 = ((/* implicit */short) ((signed char) arr_0 [i_0] [i_0]));
                        arr_14 [i_1] [i_1] [i_3] = arr_7 [i_2] [i_1];
                        var_13 = ((/* implicit */short) min((((/* implicit */unsigned short) ((short) var_6))), (((unsigned short) arr_9 [i_1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [i_0] [i_4] [i_4] [i_0] [8U] = ((/* implicit */long long int) var_0);
                        arr_24 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) min((((int) var_9)), (var_4)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (var_3)))));
    var_15 = var_0;
}
