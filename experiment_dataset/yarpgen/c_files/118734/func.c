/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118734
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [14LL] [i_0] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [(short)17]);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */long long int) arr_3 [i_0] [i_1] [10]);
                            arr_11 [(_Bool)1] [i_0] [16U] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_1 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)8] [i_1] [(unsigned short)8])))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
                            {
                                arr_15 [i_0] [i_4] [i_3] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_1] [i_0]))));
                                var_17 ^= ((/* implicit */long long int) (+((+(((/* implicit */int) arr_0 [0LL]))))));
                            }
                            for (int i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
                            {
                                arr_18 [i_0] = ((/* implicit */short) 1462150665U);
                                arr_19 [i_0] [i_1] [i_1] [6ULL] [i_0] [(signed char)11] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21450)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (371318432U)))) : (min((arr_1 [5LL]), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) -1366063023))));
                                arr_20 [(unsigned short)2] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-28295)) ? (((/* implicit */unsigned long long int) min((arr_9 [i_1] [7ULL] [i_3] [i_5]), (((/* implicit */long long int) (unsigned short)56385))))) : (((unsigned long long int) (unsigned char)25)))) * (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)56385)))) ? (((((/* implicit */_Bool) arr_17 [8] [i_1 + 1] [i_2] [2U] [(signed char)2])) ? (((/* implicit */int) (unsigned short)32767)) : (201013659))) : (((/* implicit */int) (unsigned short)62667)))))));
                                arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((int) min((((/* implicit */int) (!(((/* implicit */_Bool) 48516917))))), (((((/* implicit */_Bool) arr_2 [i_2] [(signed char)11])) ? (48516917) : (((/* implicit */int) arr_7 [i_5])))))));
                            }
                            for (int i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                            {
                                arr_24 [i_0] [i_0] [(signed char)14] [i_0] [i_6] = ((/* implicit */unsigned char) arr_14 [i_0] [2ULL] [(_Bool)1] [(_Bool)1] [i_3] [(signed char)6] [i_6]);
                                arr_25 [i_0] [i_1 + 1] [i_2] [i_0] [i_6] = arr_0 [1LL];
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_0] [i_0] [i_1 - 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 48516897)) ? (((/* implicit */unsigned int) var_8)) : (var_14)))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 3] [i_6 + 1])) : (((/* implicit */int) min(((short)32640), (((/* implicit */short) var_4))))))) : (((/* implicit */int) arr_0 [(short)12])))))));
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)32640)) < (((/* implicit */int) ((-48516886) == (((/* implicit */int) (unsigned char)231)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_7)) == (min((((/* implicit */unsigned int) ((1742647087U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)3665)))))), (min((((/* implicit */unsigned int) var_7)), (var_15)))))));
    var_21 = ((/* implicit */unsigned int) (((+(-48516898))) & (((((/* implicit */_Bool) var_2)) ? ((+(var_5))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (201013658)))))));
}
