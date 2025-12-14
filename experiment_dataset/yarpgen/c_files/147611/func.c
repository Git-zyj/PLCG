/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147611
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_2 + 1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (1745772486U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))))))));
                    var_17 = (-(((/* implicit */int) arr_3 [i_2])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((short) min((((3253799581274092377LL) % (((/* implicit */long long int) var_11)))), (((var_7) - (var_6))))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4080533281U), (arr_13 [i_3] [i_5] [i_3])))) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) ((((/* implicit */int) (short)22942)) <= (((/* implicit */int) arr_3 [20U])))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3])) >> (((((/* implicit */int) (short)32767)) - (32758)))))), (((((/* implicit */_Bool) arr_11 [7LL] [i_4] [i_5] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)20] [i_4] [i_5] [i_4]))) : (17866013010278598694ULL)))))));
                    arr_14 [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) ((arr_5 [i_3 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 + 1])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((short)32767), ((short)-32767)))), (4398046511103ULL)))));
                }
            } 
        } 
        arr_15 [i_3] = ((/* implicit */int) ((signed char) ((((/* implicit */int) ((short) (short)32767))) * (((/* implicit */int) min(((short)-32761), (var_3)))))));
    }
    for (short i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_12))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_17 [i_6]))));
    }
    var_22 = ((/* implicit */int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))) <= (2264655528U))) ? (((((/* implicit */_Bool) -7694935449831558389LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)10008))))) : (((/* implicit */long long int) min((((/* implicit */int) (short)15132)), (var_1)))))) < (((/* implicit */long long int) var_1))));
    var_23 = ((/* implicit */int) ((unsigned int) (short)-32743));
}
