/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164536
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_0] [13] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((-2070913967) != (((/* implicit */int) var_1))))))) < (((int) (unsigned char)81))));
                                var_19 = ((/* implicit */short) 8228664191731298545LL);
                                var_20 ^= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (unsigned char)11)))));
                                var_21 = ((/* implicit */long long int) (-(((4122100703349556247ULL) % (((/* implicit */unsigned long long int) ((int) (unsigned short)32385)))))));
                                var_22 = (-(arr_9 [i_1] [i_4]));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1149267107812435752LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2] [i_5])))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == ((+(2070913967)))))));
                        var_24 = ((/* implicit */short) max((((/* implicit */long long int) (short)-16530)), ((+(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_5]))) + (arr_0 [i_5])))))));
                        arr_16 [(unsigned char)4] [i_1] [i_1] [0ULL] [i_5] &= ((/* implicit */short) ((unsigned long long int) ((_Bool) var_1)));
                        var_25 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_5] [i_5])))) <= (((/* implicit */int) ((unsigned char) (unsigned short)6210)))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) ((unsigned char) -2070913969)))));
    var_27 = (~(min((((/* implicit */long long int) var_16)), (((((/* implicit */long long int) -1961578282)) | (var_6))))));
}
