/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172797
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
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4114388219643132173LL)) ? (((/* implicit */unsigned long long int) 753044759)) : (16216202554194600449ULL)));
    var_17 = ((/* implicit */long long int) (short)-6612);
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) 524287U))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = arr_4 [8] [i_1] [i_1];
                arr_6 [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
                var_20 = ((/* implicit */signed char) ((unsigned short) ((((4114388219643132173LL) >> (((/* implicit */int) arr_1 [i_1] [i_1])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_21 = ((signed char) (~(((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned char) -846018902908518523LL);
                }
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((short) (!(arr_4 [i_0] [i_1] [i_1]))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_0])) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_0])) ? (((/* implicit */unsigned int) max((-753044759), (((/* implicit */int) (unsigned short)32021))))) : (arr_14 [i_3] [i_3] [i_1] [i_3]))) : (((/* implicit */unsigned int) min((753044759), (((/* implicit */int) (short)32760)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
