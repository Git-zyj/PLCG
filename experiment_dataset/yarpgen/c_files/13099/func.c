/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13099
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) arr_1 [i_0 - 1] [i_0]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) ((11340193339101403003ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        var_21 += ((/* implicit */unsigned char) ((_Bool) ((short) (unsigned short)45101)));
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (short)-22657);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((signed char) (unsigned char)127))) ? (2009546505) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                                var_22 -= ((/* implicit */unsigned char) (signed char)75);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    var_23 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)16383))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 3] [i_6 + 3])) == (((/* implicit */int) (signed char)-32))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                var_25 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20409)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (short)-17156))))) > (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-25))))) ? (((arr_6 [i_8] [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))) : (arr_1 [i_7] [i_8]))));
                arr_27 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_20 [i_7] [i_8])))));
                arr_28 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (signed char)-40)) && (((/* implicit */_Bool) 18446744073709551606ULL)))))) || (((((/* implicit */_Bool) (unsigned short)20434)) && (((/* implicit */_Bool) arr_12 [(_Bool)1] [(_Bool)1] [i_7] [(signed char)19] [i_8] [i_8]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (signed char i_12 = 4; i_12 < 18; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)45101)))));
                                arr_40 [i_9] [i_9] [i_11] [i_13] = ((/* implicit */unsigned int) (signed char)17);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            {
                                var_27 -= ((/* implicit */signed char) arr_41 [(signed char)6] [(signed char)6] [(signed char)6] [(signed char)6]);
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((_Bool) (unsigned char)239)) && ((!(((((/* implicit */_Bool) arr_7 [(signed char)20])) || (arr_8 [i_9] [i_16] [i_14] [i_15]))))))))));
                                arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_45 [i_9] [i_9] [(signed char)13] [i_15] [i_15])) != ((-(((/* implicit */int) (short)15360))))))) ^ (((((/* implicit */int) ((signed char) (unsigned char)25))) ^ (((/* implicit */int) ((signed char) arr_43 [i_9] [i_10] [(signed char)18] [i_15])))))));
                            }
                        } 
                    } 
                } 
                arr_48 [i_9] = ((/* implicit */unsigned short) ((arr_37 [(unsigned char)10] [i_9] [i_10] [i_10] [i_10]) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_46 [i_10] [i_10] [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_46 [i_9] [i_10] [i_9] [i_10] [i_10]))))));
                var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((12041970775292368244ULL) != (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-120))))))));
                arr_49 [i_9] [i_10] = ((/* implicit */int) ((_Bool) arr_5 [i_9]));
            }
        } 
    } 
}
