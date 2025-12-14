/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184711
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
    var_10 = ((/* implicit */int) ((long long int) (-(9223372036854775779LL))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((int) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [24LL] [i_3] = ((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_2])), (((((/* implicit */int) (signed char)120)) * (((/* implicit */int) (short)-7968)))))));
                        var_12 = ((/* implicit */unsigned long long int) ((unsigned char) (short)-7973));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_0] [i_0 - 1]))) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) >= (var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))))));
        var_14 = ((/* implicit */signed char) ((max((17883759785038497325ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)3))))), (var_4))))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_15 = ((/* implicit */short) ((int) 562984288671054291ULL));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 3; i_8 < 8; i_8 += 4) 
                    {
                        {
                            arr_25 [i_4] [i_5] [(short)10] [i_4] [i_8] [i_4] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5])), (max((((/* implicit */unsigned long long int) (-(-9223372036854775776LL)))), (((14335247903992014885ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_20 [i_4]) & (max((80390060U), (((/* implicit */unsigned int) arr_18 [i_4] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) >= (var_3))) ? (var_3) : ((-(((/* implicit */int) arr_18 [i_7] [i_7]))))))) : ((+(var_1)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_9 = 3; i_9 < 10; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((max((arr_9 [i_10] [i_11 - 1]), (arr_9 [i_4] [i_11 - 2]))) << (((var_5) + (815154224)))));
                        var_18 = ((/* implicit */unsigned long long int) arr_19 [i_4] [i_9] [i_4] [i_11]);
                        arr_35 [i_4] [i_10] = (~(((/* implicit */int) max((((/* implicit */short) (signed char)39)), ((short)-6861)))));
                    }
                } 
            } 
        } 
        arr_36 [i_4] |= ((/* implicit */_Bool) (unsigned short)40750);
    }
    var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (((((~(((int) arr_0 [i_13])))) + (2147483647))) << (((max((arr_5 [i_12] [i_13] [22ULL]), (arr_5 [i_12] [i_13] [i_13]))) - (12921973734092702082ULL)))));
                arr_42 [i_13] = ((/* implicit */short) min((((/* implicit */unsigned int) max(((signed char)46), ((signed char)-77)))), ((~(arr_9 [i_12] [i_12])))));
                var_21 = ((/* implicit */int) arr_0 [i_12]);
                arr_43 [i_12] [i_13] = max((max((((/* implicit */unsigned long long int) max((arr_39 [i_12]), (((/* implicit */unsigned short) arr_4 [i_12] [i_12] [i_12]))))), (max((2566742615056498764ULL), (((/* implicit */unsigned long long int) arr_37 [i_12] [i_13])))))), (arr_0 [i_13]));
            }
        } 
    } 
}
