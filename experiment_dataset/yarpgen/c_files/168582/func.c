/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168582
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = max((min((((/* implicit */long long int) (short)-20840)), (min((((/* implicit */long long int) 4294967295U)), (-2457894348905005521LL))))), (((18014397972611072LL) << (((/* implicit */int) (!(((/* implicit */_Bool) 2251797666201600LL))))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((long long int) min(((~(var_12))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (var_3))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 += ((/* implicit */unsigned int) ((signed char) (+(arr_6 [i_0] [i_0]))));
            arr_7 [i_0] = ((short) ((unsigned int) max((var_10), (((/* implicit */unsigned short) var_13)))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((arr_6 [i_0] [i_2]) - (3032667176U)))));
            arr_10 [i_0] = ((/* implicit */signed char) 1071422031U);
        }
        var_19 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) 4506283960536136102LL);
        var_21 ^= ((/* implicit */long long int) max((((((/* implicit */int) arr_12 [i_3])) ^ (((/* implicit */int) arr_12 [i_3])))), ((-(((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned short) arr_14 [i_3] [(short)18]);
                    arr_19 [(unsigned short)8] [i_4] &= ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (signed char)-90)))));
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned short) min((var_0), ((signed char)16)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) arr_12 [i_6]);
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((+(var_5))) >= (((/* implicit */unsigned long long int) (-(arr_8 [i_6] [i_6] [i_6]))))))), (min((max((9829045390493394891ULL), (((/* implicit */unsigned long long int) arr_5 [i_6])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_5)));
            var_26 = ((/* implicit */short) max((var_26), (max((max((var_6), (((/* implicit */short) ((signed char) 2351030238U))))), (arr_25 [i_8])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                var_27 |= ((/* implicit */unsigned long long int) var_0);
                arr_33 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_13 [i_7 + 1] [i_9]);
            }
        }
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            arr_36 [i_7] = ((/* implicit */unsigned short) (signed char)-120);
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) var_13)))))) > (((/* implicit */int) var_0)))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_29 -= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_4))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_6)), (3223545286U))), (((/* implicit */unsigned int) arr_9 [i_7] [(signed char)2])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (signed char i_13 = 2; i_13 < 8; i_13 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) arr_30 [i_13] [i_13 + 2] [i_7 + 1] [(unsigned short)5]);
                        /* LoopSeq 1 */
                        for (short i_14 = 2; i_14 < 7; i_14 += 1) 
                        {
                            var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) != (var_5));
                            arr_49 [i_7] = min((min((var_10), (((/* implicit */unsigned short) (short)(-32767 - 1))))), (var_9));
                            var_32 -= ((/* implicit */unsigned short) (+(4362143215172466647LL)));
                            var_33 += min((((/* implicit */unsigned long long int) ((arr_39 [i_13] [i_14 - 2]) >> (((((/* implicit */int) (short)-21236)) + (21258)))))), ((-(((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                            arr_50 [i_7] [i_13] [i_12] [i_11] [i_7] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_1))) == (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_14))))))));
                        }
                    }
                } 
            } 
            arr_51 [i_7] = ((/* implicit */long long int) ((unsigned short) var_2));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        arr_54 [i_15] [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (short)24274)))));
        var_34 = ((/* implicit */signed char) 1071422031U);
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        arr_57 [(signed char)0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-67))));
        var_35 += 1997540254U;
    }
    var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
    var_37 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (var_12)));
}
