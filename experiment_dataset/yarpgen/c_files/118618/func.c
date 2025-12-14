/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118618
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(min((var_3), (max((((/* implicit */unsigned int) var_0)), (var_7))))))))));
        var_14 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) min((var_6), (var_6)))), (min((var_3), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) max((0), ((~(((/* implicit */int) (unsigned char)149)))))))));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_15 = (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)49)), ((unsigned char)243)))));
        var_16 |= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)14267)), ((~(754807878U)))));
        var_17 = var_6;
        var_18 |= max((max((((/* implicit */unsigned int) var_10)), (var_7))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)97))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_6 [i_2 - 1] |= ((/* implicit */_Bool) (-(var_3)));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_11 [(unsigned char)12] [i_4] [i_4] = min(((-(((/* implicit */int) var_8)))), ((~(min((var_10), (((/* implicit */int) var_8)))))));
            arr_12 [i_3] [i_4] = ((/* implicit */unsigned char) max((min((var_10), (((/* implicit */int) min((var_0), (var_11)))))), ((~(((/* implicit */int) var_2))))));
        }
        var_21 += ((/* implicit */short) min(((~(((/* implicit */int) var_8)))), (min((((/* implicit */int) var_2)), (var_10)))));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551597ULL)))))));
        var_23 = ((/* implicit */short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
        {
            var_24 = ((/* implicit */_Bool) min((max(((~(var_7))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_8))))))))));
            arr_16 [i_5] [i_5] [i_5 + 1] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_3))))))), (min((((/* implicit */unsigned int) max((var_5), (((/* implicit */short) var_1))))), (max((var_7), (var_7)))))));
            var_25 = ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)24292)));
            arr_17 [i_5] [i_3] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_11)))), (var_10)));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            arr_21 [i_6] [i_6] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((+(var_10))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (max((min((18446744073709551586ULL), (((/* implicit */unsigned long long int) (unsigned char)149)))), (((/* implicit */unsigned long long int) var_11))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10))))));
                var_27 += ((/* implicit */unsigned char) var_1);
            }
            arr_25 [i_6] [i_6] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)85))))), (min((max((258048U), (((/* implicit */unsigned int) (unsigned char)149)))), (((/* implicit */unsigned int) max((-1147176661), (((/* implicit */int) (unsigned char)149)))))))));
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned short) (+((+((+(((/* implicit */int) var_11))))))));
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_28 = max((((/* implicit */int) min(((short)-27089), (((/* implicit */short) (signed char)-118))))), (max((min((-539147721), (((/* implicit */int) (short)-8768)))), (((/* implicit */int) var_11)))));
        var_29 = min((1884790262767028232LL), (((/* implicit */long long int) (short)29538)));
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5ULL))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_31 = ((/* implicit */unsigned long long int) var_8);
        var_32 = ((/* implicit */signed char) var_9);
    }
}
