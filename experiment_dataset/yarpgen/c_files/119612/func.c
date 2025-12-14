/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119612
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
    var_11 = ((/* implicit */unsigned char) var_5);
    var_12 += ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */unsigned long long int) -16LL)) : (5977111604201224422ULL)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (signed char)-97);
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12452)) ^ (((/* implicit */int) var_3))))), ((((_Bool)1) ? (4855642733569092247LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        var_15 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_9)), (max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */int) arr_15 [i_2] [i_2] [i_2 - 1] [i_5] [i_6])) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (short)-15785)) && (((/* implicit */_Bool) 1399091631932203974LL))))) - (1))))))));
                            var_17 = ((/* implicit */signed char) 3276211931U);
                            arr_17 [i_3] [i_5] [i_4] = ((/* implicit */signed char) ((((long long int) 336236076)) < (((/* implicit */long long int) arr_6 [i_4] [i_3]))));
                            arr_18 [12LL] [i_2 + 2] = ((/* implicit */short) arr_10 [(_Bool)1] [i_4] [i_5] [i_6]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                var_18 = ((arr_16 [i_7] [i_7] [i_7 + 1] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) & (4370540426306922344ULL));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_5))));
            }
            for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) arr_21 [i_8] [i_2 + 3] [i_2 + 1]));
                var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)16))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            arr_27 [i_2] [i_9] = ((/* implicit */signed char) var_4);
            var_23 = ((/* implicit */signed char) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]);
            /* LoopSeq 1 */
            for (unsigned int i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 2; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((arr_9 [i_10 + 1] [i_9 + 1] [i_2 - 1]) ? (((/* implicit */int) arr_9 [i_10 - 3] [i_9 + 1] [i_2 + 2])) : (((/* implicit */int) arr_9 [i_10 - 1] [i_9 + 1] [i_2 + 3]))));
                            var_25 = ((/* implicit */unsigned int) ((1082396638U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(unsigned short)17] [(_Bool)1] [i_10] [i_11] [i_12])))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_9 + 1] [i_10 - 2] [i_10 - 2]))));
            }
            var_27 += ((/* implicit */int) ((signed char) 8006687253021277779ULL));
        }
        var_28 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
    }
}
