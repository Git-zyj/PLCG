/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148562
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
    var_11 = ((/* implicit */short) (((~(((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4538))) : (var_1))))) == (((/* implicit */unsigned long long int) max((275572142961987791LL), (((/* implicit */long long int) (unsigned char)253)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (short)-26549);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    var_13 = ((/* implicit */short) (~(arr_6 [i_0 - 2] [i_0] [i_0])));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_6 [i_0 + 1] [4LL] [i_2 + 2]))) * ((+(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (short)26549))))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)144)) * (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] [(unsigned char)12] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 - 1])) * (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 - 1]))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(arr_0 [i_3])));
                    arr_11 [i_0] = ((/* implicit */int) var_8);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 1536203818814805589LL))));
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? ((+(275572142961987791LL))) : (arr_14 [i_0] [i_0 + 1] [i_4] [i_0 - 2] [(_Bool)1])));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_16 [i_0 + 1] [2LL] [i_0] [i_0]))));
            }
        } 
    } 
}
