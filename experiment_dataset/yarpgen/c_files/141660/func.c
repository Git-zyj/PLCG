/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141660
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (signed char)115)))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_2 [i_2 - 1]))))) ? (((((/* implicit */_Bool) (unsigned short)13068)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))) : (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_0 [i_2])))) - (((/* implicit */int) (unsigned char)130)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_14 [i_3] |= ((/* implicit */unsigned short) (~(var_10)));
            arr_15 [i_3] [i_3] [(short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) arr_0 [(unsigned short)6]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)115))));
            var_19 ^= ((/* implicit */unsigned int) arr_2 [i_4 + 2]);
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)45)) > (((/* implicit */int) (signed char)111))));
        }
        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) /* same iter space */
        {
            arr_19 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16)))) : (arr_6 [i_5 - 1])));
            /* LoopNest 2 */
            for (long long int i_6 = 3; i_6 < 11; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (~((~(-2661064435862572681LL)))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_5])) ? (((8384427652524263256LL) << (((arr_11 [i_3]) - (7356672542750665743LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((-7711056825764914414LL) == (((/* implicit */long long int) 1576140514))))))));
                    }
                } 
            } 
            arr_25 [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_3]);
        }
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_29 [i_3] [i_3] [(short)7] = ((/* implicit */unsigned char) ((((arr_23 [8LL] [i_3] [8LL] [(_Bool)1]) % (((/* implicit */unsigned long long int) -7811152619569022160LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))));
            var_23 = ((((/* implicit */int) ((arr_28 [i_3]) && (((/* implicit */_Bool) (short)26))))) * ((~(((/* implicit */int) var_4)))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (arr_13 [i_8] [i_8] [i_8])));
        }
        var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_17 [i_3] [(unsigned char)4])))) ? ((~(10705117224315300937ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_2))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_27 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-89))))))), (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (unsigned short)38713))))))));
        var_28 -= ((/* implicit */int) ((((/* implicit */int) ((unsigned char) ((arr_31 [i_9]) >= (arr_31 [(_Bool)1]))))) != (((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
}
