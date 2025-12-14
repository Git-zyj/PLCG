/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188841
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 &= ((/* implicit */long long int) (!(((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_0])), ((short)-32645)))) || (((/* implicit */_Bool) 2147483647))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7961870663392644586LL)) ? (-277348282) : (((/* implicit */int) (_Bool)1))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32634)) ? (531114292266174551LL) : (max((arr_0 [i_0]), (((/* implicit */long long int) (short)32628))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_14 -= ((/* implicit */signed char) (-(((int) ((((/* implicit */int) (unsigned char)52)) ^ (((/* implicit */int) (unsigned short)19936)))))));
            var_15 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -371397379)) : (arr_0 [i_1])))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)95)))))), (((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_0 [i_1]))))) - (((/* implicit */int) max((var_9), (var_6))))))));
            var_16 |= ((/* implicit */_Bool) arr_2 [i_1]);
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_17 -= ((/* implicit */_Bool) (~(2147483647)));
                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0]))));
                var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_5)))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                        }
                    } 
                } 
            }
            arr_17 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) - (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [(_Bool)1]))));
        }
        for (short i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_6 - 1] [i_6]), (((((/* implicit */int) var_3)) | (((/* implicit */int) (short)-11413))))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_2)))) : (((/* implicit */int) (_Bool)1))));
            arr_21 [i_0] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_6))))) : (((/* implicit */int) (unsigned short)50216)))));
        }
    }
    /* LoopNest 3 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-11413)) ? (((/* implicit */int) arr_1 [i_8 + 2])) : (((/* implicit */int) arr_2 [(short)18])))), (((((/* implicit */int) arr_1 [i_8 + 2])) + (((/* implicit */int) arr_1 [i_8 + 2])))))))));
                    arr_29 [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) arr_6 [(_Bool)1] [i_8 + 1])) | ((~(((/* implicit */int) arr_23 [i_9]))))))));
                }
            } 
        } 
    } 
}
