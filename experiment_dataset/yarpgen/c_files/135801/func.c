/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135801
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
    var_11 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) && (((/* implicit */_Bool) arr_3 [i_0 - 1]))))) + (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) ((signed char) 3069181742U))))))));
                var_13 = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */short) arr_3 [i_4]);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0 - 1] [i_0 - 1])), (var_6)))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (3069181742U)))), ((short)-13839)))) ? ((-(((/* implicit */int) ((signed char) var_0))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_11 [i_1] [i_2] [i_2] [i_2] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 11735032433787167395ULL)))))))))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_5]))))));
                            }
                            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((_Bool) ((arr_0 [i_0]) / (arr_1 [i_2])))) ? (3552349565U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((8559103260446482725ULL) % (((/* implicit */unsigned long long int) 3060364237U))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1225785541U))))))))));
                                var_16 |= ((/* implicit */unsigned int) ((unsigned char) (short)29998));
                                arr_21 [i_1] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (3488653823832054949LL) : (((/* implicit */long long int) 1096784781U))))));
                                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1] [i_0] [i_0]))));
                            }
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)26392), (((/* implicit */unsigned short) (short)21155))))) ? (((long long int) arr_3 [i_0 + 1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 1 */
    for (short i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))) : (var_6))) & (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11234)))))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_6))))) : (((/* implicit */int) var_0))));
        arr_26 [i_7] = ((/* implicit */signed char) 1877261875030706349ULL);
    }
    var_20 = ((/* implicit */unsigned int) ((long long int) (unsigned short)3));
}
