/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149918
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 15831886506205308027ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(2614857567504243594ULL))))));
            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) var_8)) - (var_14)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0])) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 15831886506205308027ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 15831886506205308030ULL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_4 [i_0] [i_2]))))))))));
            arr_10 [i_0] [i_0] [i_0] = 15831886506205308028ULL;
            arr_11 [i_0] [i_0 + 1] = ((((arr_6 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
            arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)896))) : (arr_6 [i_0] [i_0 + 1])));
        }
        for (short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) == (2614857567504243571ULL)));
                arr_17 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))) - (63U)));
                arr_18 [i_0] [i_3] = (short)15027;
            }
            /* LoopSeq 3 */
            for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                var_23 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)-8)) != (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                arr_22 [i_3 - 1] [i_0] [i_5] [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 888396599)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0 + 1]))) : (17179868672ULL))) & (((((/* implicit */unsigned long long int) 9223372036854775807LL)) * (var_4)))));
                arr_23 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_15 [i_5] [i_3] [i_5] [i_3]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            }
            for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
            {
                arr_26 [i_0] [i_3] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (15831886506205308023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5961)))));
                var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 12151602548008127191ULL)) ? (((/* implicit */unsigned long long int) -888396600)) : (8217485743979310150ULL)));
            }
            for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
            {
                var_25 ^= (unsigned short)38194;
                arr_30 [i_0] [i_3 + 2] [i_7 + 1] = ((/* implicit */unsigned long long int) arr_19 [i_0 + 1] [i_3] [i_3 + 2] [i_7 - 2]);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 1])) ? (arr_25 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (arr_25 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 1])));
            }
            var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)13072)))) ? (arr_27 [i_3 + 1] [i_3] [i_0] [i_3]) : (((/* implicit */long long int) arr_3 [i_0] [i_3] [i_0]))));
            var_28 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6077488860991953618ULL))));
            var_29 -= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) : (var_8));
        }
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) 7077452874772404436LL)) < (15831886506205308032ULL))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) arr_35 [i_0] [i_8] [i_8] [i_8]))));
                arr_36 [i_0] [i_0] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1]))));
                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11522402417041246791ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) & (15831886506205308030ULL)))));
            }
            arr_37 [i_0 + 1] [i_0] = ((/* implicit */short) var_9);
        }
        var_33 -= (!(((/* implicit */_Bool) var_6)));
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        arr_40 [i_10] [i_10] = ((/* implicit */int) 2614857567504243585ULL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_11 = 3; i_11 < 20; i_11 += 4) 
        {
            arr_45 [i_11 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_11 + 2] [i_11 + 1]))));
            arr_46 [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) 129024U))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)127)) / (2053983006)));
                var_35 &= ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)30292)))) ? (288230376149614592LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25069)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_38 [i_10]))))));
            }
            arr_52 [i_10] [i_10] = ((/* implicit */unsigned char) ((long long int) var_12));
            arr_53 [i_10] = ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) 490716293)));
            arr_54 [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_10] [i_10] [i_10] [i_10]))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
        {
            var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10] [i_14]))) ^ (var_0)))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)48704))) < (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)13806)))))))));
            var_37 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15831886506205308028ULL))))), ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (2946700505171418280ULL)))))));
        }
        arr_57 [i_10] [i_10] = ((/* implicit */unsigned char) (+(arr_43 [i_10])));
    }
    var_38 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)182)) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11923)) || (((/* implicit */_Bool) (short)5949)))))))));
}
