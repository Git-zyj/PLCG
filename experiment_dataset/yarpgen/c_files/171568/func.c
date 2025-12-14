/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171568
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((max((var_14), (((/* implicit */int) arr_5 [i_3 + 2] [i_3] [i_3 + 2] [11LL])))) - (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_5 [i_3 - 1] [i_3] [i_3] [6ULL]))))));
                            var_16 = ((/* implicit */long long int) (((+(var_10))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))))))));
                            var_17 = ((/* implicit */signed char) (~((~(((((/* implicit */int) arr_1 [i_2])) ^ (((/* implicit */int) var_4))))))));
                            var_18 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)6))))))), (((arr_6 [i_3] [i_2] [4] [i_3 + 2]) + (arr_4 [i_2])))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (+(min((-2147483646), (((/* implicit */int) (unsigned short)2709))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)21), ((short)-26))))))) : (min((((((/* implicit */unsigned long long int) var_7)) | (var_10))), (((arr_4 [(_Bool)1]) >> (((((/* implicit */int) var_8)) - (794))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            {
                arr_14 [i_5] = (((~((-(var_9))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_4 - 1]))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5])))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [9LL]))))) & (arr_13 [i_4] [i_4 - 2] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3965712214853273413ULL) == (((/* implicit */unsigned long long int) 1U)))))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((arr_12 [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)-31522)))))))));
                            /* LoopSeq 1 */
                            for (int i_8 = 4; i_8 < 13; i_8 += 1) 
                            {
                                arr_22 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 5373723716638179523ULL)) && (((/* implicit */_Bool) (short)-32756)))))))) & (max((((/* implicit */unsigned int) ((arr_17 [i_6] [i_6] [(_Bool)1] [i_6] [i_8]) && (((/* implicit */_Bool) 13673960620474711095ULL))))), (315979668U)))));
                                var_23 = ((/* implicit */unsigned int) var_6);
                            }
                            var_24 = ((/* implicit */int) min((5373723716638179523ULL), (((/* implicit */unsigned long long int) (unsigned char)200))));
                        }
                    } 
                } 
            }
        } 
    } 
}
