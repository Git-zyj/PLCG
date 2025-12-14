/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182580
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */signed char) -605745570);
    var_22 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_17)) ? (35184237871104ULL) : (((/* implicit */unsigned long long int) 1248274534U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 35184237871122ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))), (max((((/* implicit */unsigned long long int) (~(-605745572)))), (0ULL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_8 [15U] = ((/* implicit */unsigned char) (unsigned short)64517);
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_13 [i_0 + 1] [i_2] [(_Bool)1] = ((/* implicit */int) var_2);
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0 - 1]))))), (max((18446708889471680494ULL), (((/* implicit */unsigned long long int) (unsigned char)235))))));
                }
                for (short i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    var_24 += ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) (signed char)-113)))))), (((/* implicit */int) (short)17824))));
                                arr_22 [0U] [i_1] [i_1] [4LL] [i_3] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_9 [(_Bool)1] [i_3] [i_0]) >= (arr_9 [i_0] [i_3] [i_3])))), (((((/* implicit */_Bool) 35184237871123ULL)) ? (arr_9 [8U] [i_3] [i_5]) : (arr_9 [i_0] [i_3] [i_4])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3046692775U))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_27 = ((_Bool) ((unsigned char) (unsigned short)31442));
                                var_28 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 782127580U)) ? (((/* implicit */long long int) -463624856)) : (7154230331237889956LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31456))) : (35184237871122ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)46666), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 201326592U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34093))) : (15086995294312269924ULL)))) ? ((+(((/* implicit */int) (unsigned short)56601)))) : (((/* implicit */int) min(((unsigned short)0), ((unsigned short)48444)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) -1161908861)))) || (((/* implicit */_Bool) 1250704468))))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) -4257044514949607853LL)), (35184237871104ULL)))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) (((~(var_8))) >= (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
}
