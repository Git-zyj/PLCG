/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124078
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)37982)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_18)))), (((/* implicit */int) ((_Bool) -1916574563)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 6; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3 - 3] [i_4])) ? (((/* implicit */int) (unsigned short)7125)) : (((/* implicit */int) (unsigned char)226)))) > (((/* implicit */int) arr_4 [i_1] [i_2 + 3] [i_1]))))) < ((-(((/* implicit */int) (unsigned char)255))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)23656)) == (((arr_8 [i_3 + 4] [i_4] [i_4] [i_4]) | (arr_8 [i_3 - 3] [i_3 - 3] [(unsigned char)8] [i_3 - 3])))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max(((unsigned short)23018), (((/* implicit */unsigned short) var_10)))), (arr_9 [i_4] [i_4] [i_3] [i_3] [i_3 - 1])))) ? (arr_8 [i_4] [i_3] [i_2] [i_1]) : (((/* implicit */int) (unsigned char)14)))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) ((var_16) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58411))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (max((((/* implicit */int) var_12)), (var_6))) : ((-(1916574563)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0 + 2]), (arr_3 [i_0 + 2])))) ? (((((/* implicit */int) var_18)) ^ (((/* implicit */int) arr_3 [i_0 + 2])))) : ((~(((/* implicit */int) (unsigned short)51101))))));
        arr_12 [i_0] [i_0] = max((((((/* implicit */_Bool) min(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)228)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58421))))) ? (1916574563) : (((/* implicit */int) (short)32512)))));
        var_24 ^= ((int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0])) ? (var_3) : (var_6)));
    }
    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_8))))), (((var_11) ? (17857831604523687240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
}
