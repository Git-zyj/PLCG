/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169917
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 32767LL))));
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_14))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((max(((-(2430429781153034947LL))), (-1LL))) / (((var_12) | (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((short) arr_5 [6LL] [6LL]))));
                    var_22 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_6 [i_0])) ? (9223372036854775801LL) : (arr_5 [i_2] [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2 + 2]))))))));
                    arr_7 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10590)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (-8349098774611075552LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8596687333019662628LL))))), (arr_0 [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */int) arr_10 [i_3] [1LL] [i_2] [i_3] [i_4])) != (((/* implicit */int) arr_4 [i_1] [i_2]))))))));
                                arr_12 [i_2] = var_17;
                            }
                        } 
                    } 
                    arr_13 [i_2 - 1] [i_0] [i_2 - 1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2]))))) ? (arr_1 [i_1]) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]))) + (7978223642855862821LL))));
                }
            } 
        } 
        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-1)))) : ((-(((/* implicit */int) (short)32767))))))) : (-9223372036854775793LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((short) var_1));
                var_26 = ((/* implicit */long long int) (unsigned char)16);
                var_27 = ((/* implicit */short) (unsigned char)8);
                var_28 = ((/* implicit */unsigned char) (short)-4864);
            }
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))) : (((/* implicit */int) ((unsigned char) var_12)))));
                var_30 += ((unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_7])) + (((/* implicit */int) var_17))));
            }
            for (short i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32753))) : (var_3))))))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) (unsigned char)195))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) min((var_33), ((short)28072)));
                            arr_31 [i_10] = ((long long int) (short)384);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) (short)30690)))))) * (((((/* implicit */int) var_15)) / (((/* implicit */int) (short)24035))))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27010))) < (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8191))) : (4194303LL)))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned char) ((1073741823LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)7032)) && (((/* implicit */_Bool) var_12))))))));
            }
            var_37 = (short)32759;
            var_38 = ((/* implicit */unsigned char) var_3);
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        var_39 = ((/* implicit */long long int) var_11);
                        arr_37 [i_0] [i_0] [i_0] [i_11] = ((long long int) ((6129955560331765268LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
                    }
                } 
            } 
            arr_38 [i_5 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (5303244078737249886LL))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0)))))));
        }
        arr_39 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (~(var_3)))))));
    }
    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) ((unsigned char) arr_8 [i_13]))))))) < (min((((/* implicit */long long int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (27606))) - (9)))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-6082249142869570471LL) : (arr_42 [i_13])))))));
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((short) max((var_14), (arr_24 [i_13] [i_13])))))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        var_42 = ((/* implicit */short) ((arr_42 [10LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14] [18LL] [i_14] [i_14])))));
        var_43 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)84)) ? (-3072131420915818950LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))) & (((7754338567365152091LL) ^ (-3532653547939421691LL)))));
    }
    for (long long int i_15 = 1; i_15 < 10; i_15 += 3) 
    {
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_15 [i_15 + 1] [i_15 + 1]))) ? (((/* implicit */int) arr_2 [i_15] [i_15 - 1] [i_15 - 1])) : (((((/* implicit */_Bool) arr_16 [i_15 - 1] [i_15 + 1] [i_15 + 1])) ? (((/* implicit */int) arr_15 [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) arr_15 [i_15 - 1] [i_15 + 1]))))));
        var_45 |= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) 8647621500978632837LL)))));
        var_46 = ((/* implicit */unsigned char) var_12);
        var_47 = ((/* implicit */short) max((((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_45 [i_15 - 1])))), (((((/* implicit */_Bool) (unsigned char)210)) && (((/* implicit */_Bool) arr_23 [i_15] [i_15 + 1] [i_15]))))))), (((unsigned char) ((short) arr_1 [i_15 - 1])))));
    }
}
