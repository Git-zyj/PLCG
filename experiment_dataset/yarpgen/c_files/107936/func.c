/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107936
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [5ULL] [i_1] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_0]))));
            var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((arr_0 [i_1]) + (333179980))) - (19)))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_0 [(short)4]))))));
                var_13 &= ((/* implicit */long long int) arr_1 [i_2]);
            }
            for (int i_3 = 3; i_3 < 9; i_3 += 2) 
            {
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) ((5821835207267388369ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                arr_12 [i_1] [i_1] = ((/* implicit */int) (+(arr_5 [i_3 - 1] [i_3 + 2] [(unsigned char)9])));
            }
        }
        for (unsigned int i_4 = 2; i_4 < 7; i_4 += 2) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((arr_14 [i_4 + 2]) + (9223372036854775807LL))) << (((arr_15 [i_4 - 1]) - (253339021U))))))));
            var_15 = ((/* implicit */unsigned short) ((long long int) var_6));
            arr_17 [i_0] = ((/* implicit */unsigned int) arr_2 [i_4]);
            arr_18 [i_0] [i_4 + 4] = ((/* implicit */int) var_4);
            arr_19 [10U] = ((var_7) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)127)));
        }
        arr_20 [i_0] [i_0] = (~(arr_6 [i_0] [i_0]));
        var_16 += ((/* implicit */unsigned char) (+(1735184187)));
    }
    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned int i_8 = 2; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_23 [i_5] [i_5 - 1])), (((((/* implicit */_Bool) arr_24 [i_5 + 1])) ? (arr_29 [i_5] [i_7] [i_7]) : (-3407404041033946665LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-103)), ((unsigned char)207))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_25 [i_6]))));
                        var_19 = ((/* implicit */short) ((5572449581384219109LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19270)))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) min((arr_27 [i_8 + 4] [i_8 - 1]), (arr_27 [i_8 - 1] [i_8 - 2])))) == (((long long int) arr_28 [i_8 - 1] [i_8 - 1] [i_8]))));
                    }
                } 
            } 
        } 
        arr_33 [12U] [12U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [18] [i_5 + 1])) ? (((/* implicit */int) arr_23 [(unsigned char)8] [i_5])) : (((((/* implicit */int) arr_23 [8U] [8U])) * (((/* implicit */int) var_5))))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((unsigned char)129), (((/* implicit */unsigned char) (signed char)94)))))));
        var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 15)))) ? (((((/* implicit */_Bool) -5572449581384219110LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5 + 1]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
        var_23 = ((/* implicit */short) (signed char)0);
    }
    var_24 = ((/* implicit */unsigned short) var_9);
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            {
                var_26 ^= ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned int) arr_34 [i_9 - 1])), (min((((/* implicit */unsigned int) var_5)), (var_2))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((/* implicit */long long int) (signed char)(-127 - 1))), (3349067899825522388LL))))));
                            var_28 -= ((/* implicit */short) min((((/* implicit */int) arr_37 [i_9 + 2])), (min((((/* implicit */int) (short)30720)), (125131427)))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_10])) ? (max((((/* implicit */int) ((_Bool) var_5))), (max((((/* implicit */int) arr_45 [i_10] [i_9])), (2043678745))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((((/* implicit */_Bool) arr_37 [i_9])) ? (5572449581384219109LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
            }
        } 
    } 
    var_30 ^= ((/* implicit */unsigned short) var_6);
}
