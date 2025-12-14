/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148510
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
    var_15 = ((/* implicit */short) max((((/* implicit */int) ((var_2) >= (((/* implicit */long long int) (~(877414624U))))))), (488280037)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_17 &= ((/* implicit */short) arr_2 [i_0] [i_1]);
            arr_5 [i_0] [i_1] = (+(488280036));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (short)-29665)) < (1834671622)))))));
            var_19 = ((/* implicit */_Bool) (-(var_2)));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((-933884133047406716LL) > (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [(signed char)5])) ? (((/* implicit */int) arr_1 [i_0])) : (-488280026))))))));
            var_20 -= ((/* implicit */int) ((((/* implicit */long long int) -488280037)) / (var_12)));
        }
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_12 [i_0] [(signed char)8] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 488280036)) ? (((/* implicit */long long int) 488280005)) : (-9168363729866277879LL)));
            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) -488280037)) || (((/* implicit */_Bool) 3462336591U))))), ((signed char)-5)));
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (signed char)5)) : (-2109271460)))) || (((/* implicit */_Bool) ((arr_2 [(short)7] [i_3]) / (arr_2 [i_3] [i_3]))))));
        }
        var_23 ^= ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) var_9))))) || (((/* implicit */_Bool) arr_9 [i_0])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 3; i_4 < 20; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_24 ^= ((/* implicit */short) (+(((/* implicit */int) var_14))));
                        var_25 = ((/* implicit */_Bool) arr_0 [i_0] [i_6]);
                        var_26 = ((/* implicit */unsigned short) ((unsigned int) ((arr_17 [i_0] [i_4 + 2] [i_6]) & (arr_15 [i_4] [i_4]))));
                        arr_20 [i_0] [i_4] [(unsigned short)16] = ((/* implicit */unsigned long long int) ((arr_6 [i_4 - 3]) / (arr_6 [i_4 - 1])));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(arr_7 [(short)0]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_1)))), (min((2669928383237864315LL), (((/* implicit */long long int) arr_16 [i_0] [i_7] [i_0])))))) - (var_6))))));
            arr_23 [1LL] [i_7] [i_7] = ((/* implicit */signed char) 488280053);
        }
        for (int i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            arr_28 [i_0] [i_8 - 1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) - (-3774939229533127097LL))))) - (max((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_8 - 1] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) arr_3 [i_8 - 1] [i_8 - 1]))))));
            var_29 = var_7;
            arr_29 [i_0] [i_8 - 1] = ((/* implicit */unsigned long long int) 488280066);
        }
    }
    for (long long int i_9 = 3; i_9 < 16; i_9 += 3) 
    {
        arr_34 [i_9] = arr_26 [i_9 - 3];
        arr_35 [8LL] = ((/* implicit */signed char) (~(((unsigned long long int) arr_1 [i_9 - 3]))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_27 [i_9 - 3]) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9 + 1])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_10 [(signed char)9] [i_9] [i_9])))) || (((/* implicit */_Bool) min((arr_22 [i_9 - 2]), (((/* implicit */unsigned long long int) arr_30 [10U] [i_9 + 1])))))))) : (((/* implicit */int) ((unsigned short) (~(-488280041)))))));
    }
    var_31 = ((/* implicit */signed char) var_8);
}
