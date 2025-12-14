/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15118
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 = ((int) ((unsigned long long int) max((var_6), (var_10))));
                            arr_12 [i_1 + 2] [(short)5] [i_1 + 1] &= ((/* implicit */signed char) ((unsigned long long int) (+(var_15))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_11))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) var_5);
                                arr_16 [i_0] [i_0] [i_0] [1LL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5539481290886664289LL)) ? (((((/* implicit */_Bool) (unsigned short)19537)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (814986657U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))));
                                var_21 = ((/* implicit */int) var_3);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((-((-(var_15))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-32))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1373873322)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                            }
                            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_1);
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? (((/* implicit */int) var_10)) : (var_13)))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_1))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_16)))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                            {
                                arr_22 [i_6] [i_0] [7] [i_0] [i_0] = ((/* implicit */short) ((9202415854152706972ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
                                var_25 = var_3;
                                var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)227)) == (((/* implicit */int) (!(((/* implicit */_Bool) 9244328219556844644ULL)))))));
                            }
                        }
                    } 
                } 
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_17), (var_17))))));
                arr_24 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) var_0)) % (var_12))), (((/* implicit */unsigned long long int) max((3479980651U), (((/* implicit */unsigned int) (short)31917)))))));
            }
        } 
    } 
    var_27 *= var_8;
    var_28 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_8)), (((unsigned int) var_9)))));
}
