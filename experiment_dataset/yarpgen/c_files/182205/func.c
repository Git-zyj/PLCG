/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182205
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 134217727)), ((~(var_3))))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -134217745)) ? (-1LL) : (((/* implicit */long long int) 134217720)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 134217727))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)63)) + (((/* implicit */int) (unsigned short)65525))))), (18446744073709551589ULL))));
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((long long int) (~(((/* implicit */int) (unsigned char)1))))), (((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_4 [i_1 - 3] [(_Bool)1])))) ^ (((/* implicit */long long int) 17)))))))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1]))))));
    }
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) min(((+(4294967285U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65515)))))))) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_3 + 2])), ((((_Bool)1) ? (((/* implicit */long long int) -3)) : (var_6)))))))))));
                    arr_15 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [(unsigned char)5] [i_4] [i_4])) - (((/* implicit */int) ((short) ((19ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                    arr_16 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (_Bool)1)))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-9) : (((/* implicit */int) arr_14 [i_2] [i_3 + 3] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) / (1020U)))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
    var_17 = ((/* implicit */short) (unsigned short)65534);
}
