/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161263
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_17 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min(((short)-17424), (((/* implicit */short) var_0))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)40)))))), (((/* implicit */int) max((max((((/* implicit */unsigned short) (short)21148)), (var_7))), (((/* implicit */unsigned short) arr_1 [i_0 - 4])))))));
        var_18 = ((/* implicit */unsigned long long int) 50331648);
        var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)40)) ? (((4294967279U) + (((/* implicit */unsigned int) -2147483640)))) : (((/* implicit */unsigned int) 50331654))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9324144965133639969ULL))))), (max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_12))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_3 [i_2] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 6; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((9324144965133639969ULL) != (((/* implicit */unsigned long long int) 1896907881))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4 + 3] = ((/* implicit */unsigned short) ((arr_4 [i_1]) % (((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (arr_12 [i_4 - 1]) : (arr_12 [i_4 - 3])))));
                        }
                        arr_16 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0 - 1] [i_0 - 2]);
                        arr_17 [i_0] &= ((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_0 - 2]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_6))) << (((((unsigned int) var_0)) - (119U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) + (min((((/* implicit */int) var_0)), (-1714505903)))))) : (min((arr_20 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1896907881) : (((/* implicit */int) var_0)))))))));
        /* LoopSeq 3 */
        for (int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_5] [i_6]))));
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_22 [i_6] [i_6])))), (min((12074155967351615442ULL), (11564802057141756628ULL)))));
            var_25 += min((((/* implicit */unsigned int) min((arr_21 [i_6 - 1] [i_6 - 1]), (arr_21 [i_6 - 1] [i_6 - 1])))), (min((((/* implicit */unsigned int) (short)-22028)), (2877781110U))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((2198901171054724916ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))))));
            var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_26 [i_5])), (max((((/* implicit */unsigned long long int) var_6)), (arr_25 [i_7]))))), (((/* implicit */unsigned long long int) var_16))));
        }
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            arr_29 [i_8] [i_5] = ((/* implicit */unsigned int) 2198901171054724941ULL);
            arr_30 [i_5] [i_5] = 6881942016567794980ULL;
            arr_31 [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) min((16247842902654826680ULL), (2251799813685248ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - ((~(var_3)))))));
        }
        arr_32 [i_5] [i_5] = ((/* implicit */signed char) arr_26 [i_5]);
    }
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_0))))) + (var_3))))))));
}
