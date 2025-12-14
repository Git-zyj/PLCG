/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145381
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned char) 598230004299364052ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (unsigned char)151)))))) : ((~(arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_2 [i_0 + 2])))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_1 [(signed char)13] [(signed char)13])), (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((unsigned int) arr_2 [i_0])), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [4ULL])))))))) | (((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((((/* implicit */unsigned long long int) 2147483647)) - (63ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1178135327U)) ? (2147483647) : (((/* implicit */int) var_12)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            arr_8 [i_1] [i_0] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2])))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) == (arr_2 [0ULL])))) >> (((arr_2 [i_0]) - (1245280797971212514ULL)))))));
            var_16 = ((/* implicit */long long int) (-((-(arr_2 [i_0 - 2])))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) 598230004299364052ULL);
        var_18 = ((/* implicit */unsigned int) (~(18446744073709551553ULL)));
        arr_11 [i_2] [i_2 + 2] = ((/* implicit */signed char) 18446744073709551552ULL);
        var_19 = ((/* implicit */unsigned long long int) var_10);
    }
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3 - 2] = ((int) (~(max((((/* implicit */int) var_12)), (var_3)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 18446744073709551552ULL))) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */int) arr_6 [i_3])) | (((/* implicit */int) arr_13 [i_3]))))))) ? (min((598230004299364052ULL), (((/* implicit */unsigned long long int) 63U)))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_12)))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            {
                arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) 2147483647);
                var_21 = ((/* implicit */short) ((unsigned long long int) (+(min((((/* implicit */unsigned long long int) -2147483647)), (arr_17 [i_4] [i_4]))))));
            }
        } 
    } 
}
