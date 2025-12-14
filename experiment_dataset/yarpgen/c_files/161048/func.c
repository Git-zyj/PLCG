/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161048
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((-1LL) != (((((/* implicit */_Bool) (signed char)-74)) ? (4997444877365113669LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-102)))))))))))));
                                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)8)), (max(((unsigned char)37), (((/* implicit */unsigned char) var_18))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1264151818U)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_1 - 1] [i_1 - 1] [0ULL] [i_1 + 1] [0ULL] [i_1 - 3] [i_1 - 3]), (arr_12 [i_1 - 3] [(signed char)6] [0] [i_1 - 3] [0] [i_1 + 1] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [10U] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 2])) ? (-1105503633617711398LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [10] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 1]))))))))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 160578206)) ? (((/* implicit */unsigned long long int) 1204867731U)) : (5225143841143002862ULL))) == (((/* implicit */unsigned long long int) -2248429209617292415LL)))) ? (2971378253U) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)219)) && (((/* implicit */_Bool) -5934454939806131214LL)))))))))));
        var_23 |= ((/* implicit */long long int) (signed char)43);
        var_24 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_7 [(_Bool)1] [i_0] [i_0] [i_0] [4U])), (((((long long int) -4919792043974775858LL)) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))))));
        var_25 &= ((/* implicit */_Bool) arr_2 [i_0]);
    }
    var_26 += ((/* implicit */unsigned int) var_11);
    var_27 = ((/* implicit */long long int) max((var_27), (((8589934591LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))))));
}
