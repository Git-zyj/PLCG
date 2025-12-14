/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176631
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(3982688255U)))), (((((/* implicit */_Bool) 2147483647)) ? (17447415659055699782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_4 - 2] [i_3 - 1] [(unsigned short)0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)32767)) + (((/* implicit */int) (unsigned short)4473))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) | (2518938333U)))));
                                arr_15 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [i_4] [i_0] = ((/* implicit */short) -3115141353603528485LL);
                                arr_16 [i_0] [i_0] [i_2] [(signed char)17] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)4485)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (968570717U))), (max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)4485))))), (((2364242787U) * (var_7)))))));
                                arr_17 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)56012))))) : (((unsigned int) (+(var_0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_23 [i_1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)61075)) ? (2752651706U) : (2364242787U))), (((/* implicit */unsigned int) max((17659260), (((/* implicit */int) (unsigned short)29474)))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)245), (((/* implicit */unsigned char) (_Bool)0))))) ? (((((/* implicit */_Bool) 2339412501U)) ? (4294967284U) : (1930724508U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-4459521713122988185LL) == (((/* implicit */long long int) 4294967280U))))))));
                                arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967293U)) ? (4836169400189476597ULL) : (14262575579546337290ULL))) < (((/* implicit */unsigned long long int) min((8709845345545942356LL), (((/* implicit */long long int) 4064606803U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_16);
    var_21 = ((/* implicit */long long int) ((((unsigned long long int) (short)-2)) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_11)))))));
}
