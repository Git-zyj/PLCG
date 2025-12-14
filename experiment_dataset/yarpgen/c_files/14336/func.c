/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14336
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0]))));
        var_13 = ((/* implicit */short) min(((+(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0])), (min((((/* implicit */signed char) arr_1 [i_0])), ((signed char)-4))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 3]);
                var_15 = ((/* implicit */_Bool) 6785402853810731784ULL);
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) (short)9653)) : (((/* implicit */int) (unsigned char)0))));
            }
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) 16384);
            arr_11 [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min(((unsigned char)190), (((/* implicit */unsigned char) (_Bool)1))))), (1022215244268936653ULL))), (17473046795595219190ULL)));
        }
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_17 = ((/* implicit */long long int) min(((-(arr_18 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) arr_1 [i_3]))));
                arr_19 [i_3] = ((/* implicit */unsigned int) ((short) ((unsigned char) (-(-33554432)))));
                arr_20 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 33554432)) ? ((-(864691128455135232LL))) : (((/* implicit */long long int) (-(-33554432))))));
                var_18 = ((/* implicit */signed char) -33554433);
                arr_21 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_3]))));
            }
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((16773120ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))), ((+(arr_4 [i_3] [i_0])))))));
        }
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_20 |= ((/* implicit */short) (unsigned char)127);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)41)), (16603668454597318755ULL)));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_6 + 1])), (((((/* implicit */_Bool) arr_2 [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6 + 1]))) : (6704319848771097619LL))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_33 [i_7] [i_5] [i_5] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) -7104248105365942106LL)), (16773126ULL)))));
            var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073692778504ULL)) ? (((/* implicit */int) (short)-7331)) : (((/* implicit */int) (unsigned char)6))))));
            var_24 ^= ((/* implicit */long long int) 18446744073692778498ULL);
        }
    }
    var_25 = (unsigned short)58268;
    var_26 = ((/* implicit */signed char) (!((!(var_4)))));
}
