/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169980
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12LL]))) : (3017494022U))), (((/* implicit */unsigned int) (unsigned char)5)))), (((/* implicit */unsigned int) ((arr_14 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2]) <= ((+(arr_4 [i_0 + 1]))))))));
                                var_17 = ((/* implicit */short) arr_9 [10LL] [10LL] [i_2] [i_4]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39484)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (unsigned short)53319))))) ? (max((((134213632) << (((arr_7 [i_2]) - (1518843346916658188ULL))))), (((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53315)))))))) : (max((((arr_11 [i_0] [i_1] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12202)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)59)))))))));
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [(signed char)15] [i_0 + 2])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)32759)))) ? (-2147483628) : (((/* implicit */int) var_0))));
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_19 [i_0 - 1]) >= (var_15)))), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 2])), (arr_19 [i_0 + 1])))));
                                arr_29 [i_6] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                                arr_30 [i_5] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) ^ (4294967295U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) (((-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-15)))))) * (((/* implicit */int) (unsigned short)12221))));
                                var_22 = ((/* implicit */signed char) arr_24 [i_0] [i_0 + 1] [i_0]);
                                arr_37 [i_0] [23] [i_5] [i_0] [i_0] = (+((~(((/* implicit */int) (signed char)13)))));
                                arr_38 [i_10 + 1] [i_5] [i_5] [(unsigned char)8] = arr_25 [i_6];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 2; i_12 < 10; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 4; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? ((-(arr_7 [i_11]))) : (((/* implicit */unsigned long long int) ((long long int) 4200059374U)))));
                                arr_51 [i_11] [i_13] [i_13] [i_13] [i_15 - 2] [i_13] = ((/* implicit */short) var_9);
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)-10)) != (arr_22 [i_11] [i_12 - 2] [i_12] [i_15 - 3])))) != (((/* implicit */int) (unsigned short)3)))))));
                                var_25 = ((/* implicit */unsigned short) var_14);
                                var_26 = (signed char)-123;
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_47 [i_11] [i_12] [i_12 - 1] [i_12 + 1] [i_13] [i_13])))))));
                }
            } 
        } 
        var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_11] [0U] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (var_16)));
    }
    for (short i_16 = 0; i_16 < 25; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                        arr_63 [i_16] [i_16] [i_18] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) max((arr_34 [i_16] [i_17] [i_18] [i_19] [i_18] [i_19]), (arr_34 [i_16] [i_17] [i_18] [i_18] [i_18] [i_19])))) : (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)100)) + (((/* implicit */int) arr_55 [i_16] [i_17] [i_19])))) == (((/* implicit */int) arr_55 [i_17] [i_18] [i_19]))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((18446744073709551590ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))))));
    }
    /* LoopNest 2 */
    for (short i_20 = 2; i_20 < 10; i_20 += 3) 
    {
        for (unsigned long long int i_21 = 1; i_21 < 10; i_21 += 1) 
        {
            {
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_69 [i_20] [i_20 - 1])))) ? (((/* implicit */int) max(((short)-6684), (((/* implicit */short) (signed char)67))))) : ((~(((/* implicit */int) arr_34 [i_21] [i_21] [i_21] [i_21] [i_20 - 1] [i_20 - 1]))))));
                var_33 = ((/* implicit */signed char) min((var_33), ((signed char)-107)));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) ((_Bool) max(((-(63050394783186944ULL))), (((/* implicit */unsigned long long int) var_4)))));
    var_35 = ((/* implicit */signed char) var_14);
}
