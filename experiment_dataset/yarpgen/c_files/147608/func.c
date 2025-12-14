/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147608
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
    var_14 = min((((/* implicit */unsigned short) var_10)), (var_6));
    var_15 -= ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned short)7936)))), (((/* implicit */int) var_2))));
    var_16 &= (unsigned short)20963;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) ((unsigned short) (signed char)7));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_18 += ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) + (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (signed char)-16))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((var_7) == (var_7)))) - (((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) arr_1 [i_1]))))));
        }
        var_19 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_11)))) > (((/* implicit */int) var_8))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) (unsigned short)64512)))))))));
            arr_13 [i_2] [i_3 - 2] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) var_4)))));
        }
        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 - 2])) && (((/* implicit */_Bool) arr_12 [i_4 + 1]))))) | (((((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 1] [i_4 + 1])) >> (((((/* implicit */int) var_13)) - (110))))))))));
            var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)226)), (((((/* implicit */_Bool) ((signed char) (unsigned short)3972))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) (unsigned short)57680)))))));
            arr_16 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_4 - 1] [i_4 - 1]))) ? (((/* implicit */int) min((var_13), (arr_5 [i_4 - 1] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65530))))));
            var_23 += ((/* implicit */long long int) arr_5 [i_2] [i_2]);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_4]))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))))))));
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 3; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_25 = ((var_3) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))));
                arr_21 [i_6] [i_5] [i_2] = ((/* implicit */signed char) (-(max((((/* implicit */long long int) arr_5 [i_2] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (var_7)))))));
                var_26 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 2])), ((-(((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))))));
                var_27 -= ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
            }
            for (unsigned char i_7 = 3; i_7 < 23; i_7 += 4) /* same iter space */
            {
                arr_26 [i_2] [i_5] [i_7] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2])) <= (((/* implicit */int) arr_3 [i_2]))))), (min((arr_11 [i_2]), (var_13))))));
                arr_27 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_25 [i_7 - 3])), ((-(((/* implicit */int) arr_24 [i_2]))))))) : (((long long int) (unsigned char)132))));
            }
            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
            {
                var_29 = ((/* implicit */long long int) var_10);
                arr_30 [i_8] = ((/* implicit */unsigned short) (unsigned char)255);
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (arr_19 [i_8] [i_8] [i_8 + 2])))), (max((arr_19 [i_8] [i_8 + 2] [i_8 + 1]), (arr_19 [i_8 + 2] [i_8] [i_8 - 1]))))))));
            }
            arr_31 [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_15 [i_2] [i_5] [i_2])))))));
        }
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) min((-4712025905619806102LL), (((/* implicit */long long int) (unsigned char)255))));
            arr_34 [i_9] [i_9 - 1] |= ((/* implicit */unsigned short) arr_10 [i_9 + 1] [i_9 + 1]);
            var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9 - 1] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1] [i_9])) : (((/* implicit */int) arr_29 [i_9 - 1] [i_9] [i_9])))))));
        }
    }
}
