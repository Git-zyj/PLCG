/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140281
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [7LL])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 2])), (((((/* implicit */_Bool) 5LL)) ? (var_8) : (((/* implicit */unsigned int) var_4)))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-7)) || (((/* implicit */_Bool) arr_0 [i_1 - 2])))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) || ((!(((/* implicit */_Bool) var_5))))));
        arr_6 [i_1 - 1] = ((((/* implicit */_Bool) min(((~(var_9))), (((/* implicit */int) (unsigned char)246))))) || (min((((arr_1 [i_1] [i_1]) || (((/* implicit */_Bool) (signed char)-2)))), ((_Bool)1))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */long long int) (unsigned char)161);
            var_15 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (unsigned char)7)) : (-1307441722)))));
            var_16 = ((/* implicit */unsigned short) var_5);
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) max((((long long int) (-(arr_2 [i_2] [i_2])))), (var_2)));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned int) ((int) max((arr_7 [i_4]), (((/* implicit */unsigned short) arr_0 [i_2])))))))))));
        }
        var_19 = ((/* implicit */short) 7766706569806638268ULL);
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_2 - 2] [i_5] = ((/* implicit */int) arr_17 [i_5]);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5])) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) min((8738113690630264706LL), (((/* implicit */long long int) var_10))))))))));
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) || (((/* implicit */_Bool) var_8))))), (((unsigned long long int) (signed char)46))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_4 [i_2 + 1]))) || (((((/* implicit */_Bool) (signed char)25)) || (((/* implicit */_Bool) (short)-9807))))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_21 [i_2] [5LL] [4LL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (-3097746729713982131LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            var_23 = ((/* implicit */short) arr_8 [i_6]);
            arr_22 [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 144115050636902400LL)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551613ULL)));
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        arr_26 [8LL] &= ((/* implicit */unsigned short) 4793918113823648375LL);
        var_24 = ((/* implicit */signed char) arr_24 [i_7]);
        var_25 = ((/* implicit */unsigned long long int) (signed char)-10);
        var_26 = ((/* implicit */unsigned long long int) arr_24 [i_7]);
    }
    var_27 &= ((signed char) min((min((var_3), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_10))));
    var_29 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))) || (((/* implicit */_Bool) var_9)))));
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned short) (!((((_Bool)0) || (((/* implicit */_Bool) var_4))))))))))));
}
