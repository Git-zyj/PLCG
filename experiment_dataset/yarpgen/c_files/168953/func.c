/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168953
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 += ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((var_18) ? (((/* implicit */int) (short)-12093)) : (((/* implicit */int) (short)26812))))))));
        var_21 = ((/* implicit */int) ((unsigned short) var_12));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = ((_Bool) (!(((/* implicit */_Bool) 978557007))));
        var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (-262144)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */short) max(((unsigned short)59178), (((/* implicit */unsigned short) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)64)))))));
                                arr_19 [i_3] [i_3 + 2] [i_3 + 1] [i_4] [i_5] [i_5] [i_3 + 2] = ((var_16) == (min((((/* implicit */long long int) ((_Bool) 9223372036854775807LL))), (arr_3 [i_5] [i_3 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 9; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) (((_Bool)1) ? (-2221587616632671103LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19355)))));
                                arr_32 [i_2] [i_2] = ((/* implicit */unsigned short) (short)16256);
                                var_25 = ((/* implicit */unsigned short) ((max((10291539359215961931ULL), (((/* implicit */unsigned long long int) (short)29041)))) / (((/* implicit */unsigned long long int) min((arr_10 [i_8] [i_8 + 2] [i_9 - 2]), (var_0))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_35 [i_8 - 1] [i_7] [i_2] = ((/* implicit */long long int) ((((_Bool) 31457280)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)8192)))))));
                        var_27 = ((/* implicit */int) (short)32767);
                    }
                    var_28 = min((min((min((var_10), (arr_23 [i_2] [i_7] [i_8]))), (((/* implicit */long long int) (-(var_2)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_7] [i_8])) >= (2147483647)))));
                    arr_36 [i_2] [i_7] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */long long int) (((_Bool)1) ? (var_1) : (((/* implicit */int) var_8))))) == (min((arr_4 [i_8]), (((/* implicit */long long int) var_18))))))), (((unsigned short) max((var_11), (var_9))))));
                    var_29 ^= ((/* implicit */short) min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1))))) : (-6961946931414200925LL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 3; i_12 < 10; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                {
                    arr_41 [i_13] [i_12] [i_12] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_26 [i_2] [i_2] [i_12] [i_2] [i_13])) - (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned short)42680))))) ? ((~(-4611686018427387904LL))) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_12)))) ? (arr_8 [i_2] [i_13]) : ((-(((/* implicit */int) (unsigned short)23407)))))))));
                    var_30 += ((/* implicit */unsigned short) var_9);
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (short)4096))) - (arr_31 [i_2] [i_13] [i_14] [i_15]))), (((/* implicit */long long int) ((((/* implicit */int) min(((short)20330), (((/* implicit */short) var_13))))) > (var_2)))))))));
                                var_32 = ((/* implicit */int) ((short) (short)15721));
                                var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_2)))));
                                var_34 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) (signed char)96))))), (((((/* implicit */_Bool) (short)32767)) ? (max((((/* implicit */unsigned long long int) var_11)), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        for (int i_17 = 4; i_17 < 9; i_17 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) ((long long int) min((((((/* implicit */_Bool) (short)4080)) ? (((/* implicit */long long int) -1787653814)) : (9222246136947933184LL))), (((/* implicit */long long int) (short)-11844)))));
                                var_36 = ((/* implicit */short) ((((/* implicit */int) var_17)) == (((/* implicit */int) (short)3970))));
                                var_37 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_17])) > (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (short)-32065)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-7783805228663053744LL))))), (min((-3360211267770850594LL), (((/* implicit */long long int) (_Bool)1))))));
                                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_12))));
                                arr_54 [i_17 - 1] [i_16] [i_13] [i_2] [i_12 - 3] [i_2] = var_5;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) var_17))), (min((var_8), (var_11)))))) ? (((/* implicit */long long int) ((((var_13) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_15)))) - ((+(((/* implicit */int) var_15))))))) : (((long long int) max(((unsigned short)3683), (((/* implicit */unsigned short) var_9)))))));
    var_40 = ((/* implicit */_Bool) var_2);
    var_41 = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16128)) ? (((/* implicit */int) (unsigned char)6)) : (var_2)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))))), (((/* implicit */long long int) ((-1861635921) + (((/* implicit */int) var_17)))))));
    var_42 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-32756))));
}
