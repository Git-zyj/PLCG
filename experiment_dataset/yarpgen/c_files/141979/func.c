/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141979
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
    var_14 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (6568364760344171676LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) : (9066903799834152340LL))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -793746321)) ? (((/* implicit */int) (unsigned short)35)) : (((/* implicit */int) (unsigned short)35))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4327))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)111)))) : (((/* implicit */int) (signed char)-127)));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20294)) ? (16043127002998576273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65493)))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(10770992483366935555ULL))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7)));
                    arr_13 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_3))) : (((/* implicit */long long int) (~(var_10))))))) ? (var_10) : ((~(((/* implicit */int) var_9))))));
                    var_18 *= ((/* implicit */unsigned short) var_2);
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) var_8);
                    var_19 = ((/* implicit */signed char) var_3);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_21 [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))));
                        arr_22 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                        arr_23 [i_1] [0LL] [i_1] [i_1] [2U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (var_10))));
                    }
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                }
                arr_24 [i_1] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) var_6))))));
    var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1)))) : (var_7)))));
}
