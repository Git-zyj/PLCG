/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148850
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((~(arr_3 [i_1] [i_0] [i_0]))) & (((/* implicit */long long int) (~(arr_2 [i_0]))))))) & (max((((/* implicit */unsigned long long int) (~(-794026054)))), (5276281509391771036ULL)))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((short) (~(arr_3 [i_0 - 4] [i_0 - 4] [i_1 - 3]))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    var_19 += ((/* implicit */unsigned short) ((((min((arr_2 [i_1 + 1]), (((/* implicit */unsigned int) (short)-3992)))) & (((/* implicit */unsigned int) (~(arr_1 [(unsigned char)1])))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2 + 2]))))))));
                    var_20 = ((int) (~((~(arr_2 [i_2 - 3])))));
                    arr_8 [i_0 - 1] [i_1 - 2] [i_1] [i_0 - 1] = ((/* implicit */short) ((signed char) -2049842961));
                    arr_9 [i_0] [i_1] [i_0] [i_2 + 1] = ((/* implicit */int) 0ULL);
                    arr_10 [i_0] [i_1 - 2] [i_1] |= ((/* implicit */unsigned long long int) arr_3 [(unsigned char)9] [i_1 - 2] [i_2 + 3]);
                }
                var_21 -= ((/* implicit */_Bool) arr_0 [i_1 - 2] [(short)4]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_12)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (+(arr_6 [i_3 - 3])));
        var_24 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (arr_12 [i_3]) : (((/* implicit */int) (short)-32756))))));
        var_25 = ((/* implicit */short) (~(arr_2 [i_3])));
        arr_13 [i_3 - 3] = ((/* implicit */short) (+((-(arr_12 [i_3])))));
    }
    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62748)))))))));
        arr_18 [i_4] = ((((/* implicit */unsigned long long int) 4131070974U)) > (min((((/* implicit */unsigned long long int) 4131070994U)), (arr_6 [i_4 + 3]))));
    }
    var_26 ^= (~(var_16));
    var_27 = ((/* implicit */short) min((((/* implicit */unsigned int) var_7)), (var_11)));
}
