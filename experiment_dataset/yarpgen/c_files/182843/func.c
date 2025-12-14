/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182843
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned int) var_6)), (var_9)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_7))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2]);
                        var_13 += ((/* implicit */signed char) ((short) arr_3 [i_0 + 1] [i_0 + 1] [i_2 - 3]));
                    }
                    for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) 2338126070359570509LL);
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 2338126070359570509LL))));
                            var_16 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */int) (short)-9233)) + (2147483647))) << (((arr_7 [i_0] [i_0]) - (487799145U)))))) : (((/* implicit */short) ((((((/* implicit */int) (short)-9233)) + (2147483647))) << (((((arr_7 [i_0] [i_0]) - (487799145U))) - (2663652293U))))));
                            arr_18 [i_0] [i_1] [i_5] = ((/* implicit */signed char) var_2);
                            var_17 = ((/* implicit */unsigned char) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                        }
                        arr_19 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [4] [i_0] = ((/* implicit */unsigned short) var_0);
                        var_18 = ((/* implicit */unsigned char) min((var_18), (var_11)));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                        var_20 = -2338126070359570509LL;
                    }
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)43914)))) == (((/* implicit */int) arr_0 [i_1] [i_2])))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((((/* implicit */_Bool) 35184372088831LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (8184ULL))))));
    var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) (signed char)78))) : ((~(((/* implicit */int) (unsigned short)43904))))))));
    /* LoopNest 3 */
    for (short i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) arr_24 [i_6 - 1] [i_6 - 1]))))), ((-(18446744073709543432ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))))))));
                    var_25 += ((/* implicit */_Bool) (~(((((/* implicit */int) (short)31100)) << ((((~(var_9))) - (3721378858U)))))));
                }
            } 
        } 
    } 
}
