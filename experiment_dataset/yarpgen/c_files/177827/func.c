/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177827
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = ((((/* implicit */_Bool) min((min(((short)24379), (((/* implicit */short) var_0)))), (((/* implicit */short) ((arr_0 [(_Bool)1]) <= (((/* implicit */unsigned long long int) arr_2 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (761849120U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) 1354721766)) != (arr_1 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))))));
        arr_6 [i_0] [(_Bool)1] = ((/* implicit */int) ((unsigned short) ((_Bool) (short)-26936)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            {
                arr_11 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                arr_12 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_10))) > (((/* implicit */int) ((((/* implicit */_Bool) ((3640335518919620722LL) + (((/* implicit */long long int) -1354721780))))) && ((_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [22ULL] [i_3] [i_3] = ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (arr_18 [i_3] [i_3] [(_Bool)1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(_Bool)1]))) : ((((_Bool)0) ? (((/* implicit */long long int) 2147483647)) : (var_5))))) - (arr_17 [i_3]));
                            arr_20 [i_1] [(short)11] [i_3] [i_4] = ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_13 [i_2] [i_2] [i_2] [11]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_0)))))))) ? (max((arr_10 [i_1] [(_Bool)1] [i_3]), (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_3] [i_3])))))) : (((/* implicit */int) max((var_4), (var_10))))));
                            arr_21 [(_Bool)1] [i_3] [i_3] = ((/* implicit */long long int) arr_10 [i_1] [i_4] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        {
                            arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_6] [i_6]))));
                            arr_28 [i_1] [i_1] [(_Bool)1] [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ? (arr_17 [i_6]) : (arr_17 [i_5])))) ? (((1355844985618821822LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)32))))) : (((/* implicit */long long int) max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) (_Bool)1)))))));
                            arr_29 [i_6] [i_5] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (arr_26 [i_1] [7] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)225), (((/* implicit */unsigned char) var_1))))))));
                        }
                    } 
                } 
                arr_30 [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_2])))));
            }
        } 
    } 
}
