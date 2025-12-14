/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125921
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
    var_18 = ((/* implicit */unsigned short) (-(var_14)));
    var_19 = ((/* implicit */signed char) max((var_9), (((/* implicit */long long int) var_7))));
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)38245)), (-8071499552839048738LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        var_21 |= ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))), (var_9)));
                        var_22 = ((/* implicit */signed char) 10936760352203878366ULL);
                    }
                    for (short i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_23 = max(((~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (10936760352203878366ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) max((max((arr_9 [i_0]), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) max(((short)-22468), (((/* implicit */short) arr_3 [i_0])))))))));
                        arr_10 [i_0] [(signed char)4] [13U] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && ((_Bool)1)))) - (((((/* implicit */_Bool) 11873716106918644977ULL)) ? (arr_5 [i_0] [i_1] [i_4 + 1] [i_0]) : (arr_5 [i_0] [i_1] [i_4 + 1] [i_4])))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_6 [i_4] [i_4 + 2] [i_4] [i_4 + 1]) & (((/* implicit */int) arr_8 [i_4 + 2] [1U] [i_4 + 2] [i_4 + 2] [i_4 + 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_0] [i_0]))) | (10ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_4 + 2] [i_4] [i_4 - 1] [i_2])));
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_8 [12ULL] [i_1] [i_1] [i_0] [i_0])) % (((/* implicit */int) arr_8 [4ULL] [1LL] [i_2] [12U] [1LL]))))));
                }
                var_24 = ((/* implicit */signed char) (_Bool)0);
                arr_13 [(signed char)1] = min((((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) arr_3 [i_0])))), (min((arr_3 [i_0]), (arr_3 [i_0]))));
            }
        } 
    } 
}
