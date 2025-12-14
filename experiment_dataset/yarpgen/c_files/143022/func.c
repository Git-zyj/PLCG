/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143022
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
    var_20 = ((/* implicit */unsigned int) ((var_17) ? (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_11 [i_0 + 2] [i_1] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_13));
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (-(var_8)));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3478663329547265765LL)));
                        var_22 = ((/* implicit */short) ((((/* implicit */long long int) var_15)) + (4666315693574092020LL)));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5464516332688255869LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_5)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_20 [i_5 - 2] [i_2] [i_1] [i_2] [i_0] &= (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_18)));
                        arr_21 [i_0] [i_2] [i_2] [i_5] [i_0 + 2] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45993)) & (((/* implicit */int) (short)-31915))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) == (((/* implicit */int) (unsigned char)12))));
                            var_25 = ((((/* implicit */_Bool) var_12)) ? (2086413394U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */unsigned int) ((5083462021179211416LL) / (-5083462021179211417LL)));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1807447147989026122LL)) || (((/* implicit */_Bool) 5083462021179211406LL)))))) & (-5747906716124666111LL)));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) (signed char)-127)))));
                            arr_29 [i_1] [i_0] [i_2] [i_1] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((var_19) ? (65535) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_29 = ((/* implicit */long long int) min((var_29), ((-(-5083462021179211419LL)))));
                        arr_30 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_5] = ((/* implicit */short) ((int) (_Bool)1));
                    }
                    for (long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0])))) ? (-5083462021179211418LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-120)))))))), (13204869522792430074ULL)));
                        arr_34 [i_0] [i_2] [i_0] = max(((-(-1676804349786384006LL))), (((/* implicit */long long int) max((600711849), (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_2] [i_2] [i_8 + 2] [i_8 + 3]))))));
                        var_30 = ((/* implicit */long long int) (unsigned char)129);
                        arr_35 [i_0] = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) (short)21630)) / (((/* implicit */int) (_Bool)1))))) | ((-((-(-6114795636335572171LL)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_40 [i_0] [i_8] [i_8] [i_2] [i_1] [i_0] = (+((+(-5016421132037994962LL))));
                            arr_41 [i_0] [i_8 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) 15132389228885548879ULL);
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) min((arr_32 [i_2] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]), ((+(1770442479U)))));
                                var_32 = ((/* implicit */short) (~(2U)));
                                var_33 = var_10;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        for (long long int i_13 = 1; i_13 < 13; i_13 += 1) 
                        {
                            {
                                var_34 *= 1320673832U;
                                var_35 = ((/* implicit */unsigned char) -5083462021179211428LL);
                            }
                        } 
                    } 
                    arr_52 [i_0] [i_0] [i_0] = ((_Bool) arr_18 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 4; i_14 < 12; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                var_36 += ((/* implicit */_Bool) ((unsigned int) ((signed char) ((((/* implicit */_Bool) (short)-32708)) ? (2147483647) : (((/* implicit */int) var_7))))));
                                var_37 = (((-(398764076U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26220)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))))))));
                                var_38 += ((/* implicit */short) ((((_Bool) ((unsigned int) -1263528815666988123LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) var_2)) ? (-1537638337) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-4231391592303749990LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (1742981479671648960LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)127))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
