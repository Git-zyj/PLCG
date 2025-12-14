/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157306
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
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        arr_13 [i_0 - 2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) + (2147483647))) << (((((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned long long int) -2316129496023739960LL)) : (3886220095649151439ULL))) - (16130614577685811656ULL)))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            arr_16 [i_4] [1ULL] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_17);
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2316129496023739946LL)))))))));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_15)), (14560523978060400176ULL))), (((/* implicit */unsigned long long int) 2064384LL)))))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */short) var_13);
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL)));
                            arr_22 [i_1] [i_2] [i_2] = ((/* implicit */short) ((6367385543712587157LL) + (((/* implicit */long long int) -813123207))));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_23 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (((((/* implicit */long long int) var_5)) | (-4590812279643414940LL)))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (1803455257)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)232)), ((unsigned short)14)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51803))) : (((var_15) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))))));
                        }
                        var_25 = ((/* implicit */unsigned short) max((max((((long long int) (unsigned char)15)), (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [(_Bool)1]))))))), (((/* implicit */long long int) max((var_19), (((/* implicit */unsigned int) max(((unsigned char)173), (((/* implicit */unsigned char) (_Bool)1))))))))));
                        arr_27 [i_0 - 2] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) 1125899898454016ULL);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_26 ^= ((/* implicit */signed char) -5274080458442026548LL);
                        arr_31 [i_0] [i_7] [i_2] [i_7] = ((/* implicit */signed char) (short)32767);
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((-5551318087676033552LL) | (((/* implicit */long long int) max((((/* implicit */int) (short)-17850)), (var_5)))))) : (max((-5551318087676033552LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)86)))))))));
                        var_28 ^= ((/* implicit */unsigned long long int) var_17);
                    }
                    var_29 = ((/* implicit */unsigned short) 1559622726);
                    var_30 = ((/* implicit */long long int) 456770196);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        for (long long int i_10 = 1; i_10 < 8; i_10 += 1) 
        {
            {
                arr_39 [i_10] [i_10] = ((/* implicit */_Bool) (unsigned short)0);
                var_32 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_10])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))))) % (min((18446744073709551592ULL), (((/* implicit */unsigned long long int) (unsigned char)249)))))), (((/* implicit */unsigned long long int) 2470187270U))));
            }
        } 
    } 
}
