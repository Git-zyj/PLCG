/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149731
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [(short)3] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [2U])) ? (31LL) : (((/* implicit */long long int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */unsigned char) ((long long int) (unsigned short)54888));
        var_14 ^= ((/* implicit */_Bool) 4294967292U);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4U)) ? (5U) : (4294967270U)))));
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */signed char) arr_3 [i_3] [i_1 + 2]);
                    var_16 |= 4194303U;
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)0))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */signed char) 4294967267U);
        var_18 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4])), (6598816101373257275LL)))), (var_12))) / (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)138)))) * (((/* implicit */int) var_9)))))));
    }
    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86)))));
            var_20 &= ((/* implicit */unsigned int) (unsigned short)27737);
            var_21 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)1]))) + (((((/* implicit */_Bool) (signed char)-83)) ? (6338790019095520743ULL) : (15202627139858002838ULL))));
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_7 [i_5] [i_5] [i_5]);
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) var_7);
                            arr_32 [i_5] [i_7] [i_7] = ((/* implicit */short) var_0);
                            var_24 = ((/* implicit */short) ((((/* implicit */int) ((((1234181940U) / (((/* implicit */unsigned int) 1922426232)))) <= (((/* implicit */unsigned int) var_10))))) << (((((/* implicit */int) max(((signed char)-108), ((signed char)86)))) - (73)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) 1427378220);
        }
        arr_33 [i_5] = ((/* implicit */short) arr_16 [i_5]);
        var_26 = ((/* implicit */signed char) (short)22);
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((arr_17 [i_5]) | (((/* implicit */unsigned int) (~(arr_11 [i_5] [i_5])))))))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967270U)) ? (((/* implicit */int) max((((((/* implicit */int) var_9)) <= (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 17U))))))) : (((/* implicit */int) ((_Bool) (short)0)))));
}
