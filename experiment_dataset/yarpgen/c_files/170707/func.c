/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170707
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
    for (short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 2] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0])))))));
                arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)63)), ((unsigned short)33482)));
            }
        } 
    } 
    var_11 = ((max((((/* implicit */unsigned long long int) max((3986607427U), (308359868U)))), (6ULL))) != (((/* implicit */unsigned long long int) max((max((3986607426U), (((/* implicit */unsigned int) (signed char)-31)))), (((/* implicit */unsigned int) var_6))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 18446744073709551609ULL))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (max((var_8), (((/* implicit */unsigned long long int) var_0))))))));
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-52)), (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-97)) & (((/* implicit */int) (unsigned short)33482))))), (max((((/* implicit */long long int) var_2)), (var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) var_1);
        arr_11 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_2)))) * (((/* implicit */int) (signed char)-113))));
        arr_12 [i_2] [i_2] = ((/* implicit */short) var_6);
        arr_13 [i_2] [14LL] = ((/* implicit */signed char) (-(var_8)));
    }
    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)45))))) ? (((var_3) ? (var_4) : (var_8))) : (min((((/* implicit */unsigned long long int) (unsigned char)175)), (4895491911891539891ULL))))));
        arr_17 [(unsigned short)8] &= ((/* implicit */long long int) ((int) ((unsigned int) (short)-6001)));
        arr_18 [i_3 + 3] = ((/* implicit */unsigned short) (signed char)4);
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    arr_26 [i_6] = (-(min((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_3)))))));
                    arr_27 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)0))));
                    arr_28 [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3986607427U)) | ((-((~(6342605278716498643ULL)))))));
                    arr_29 [(short)20] [(short)20] [i_5] [(short)20] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_2)))), (((int) ((var_0) & (-1116167684))))));
                    arr_30 [i_5] [i_4] = ((/* implicit */unsigned long long int) arr_14 [9ULL] [14]);
                }
            } 
        } 
        arr_31 [i_4] = ((unsigned int) min((((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) arr_19 [(unsigned short)15])) : (var_8))), (((18446744073709551603ULL) | (((/* implicit */unsigned long long int) 1687397421U))))));
    }
}
