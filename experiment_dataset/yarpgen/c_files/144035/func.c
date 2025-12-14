/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144035
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) max(((-(-1413058469))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 - 1]))))) ? ((~((+(var_0))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_5 [15ULL] [i_0] [15ULL] [i_1]))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((1348246488) - (((/* implicit */int) (unsigned short)25931))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39627))) + (13313104708966182266ULL)))))) ? (min((((/* implicit */long long int) min((var_7), (var_5)))), (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_10))))) : (((/* implicit */long long int) -789918353))));
                    var_16 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_1) % (var_6)))) ? (min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_2])))) : (((unsigned long long int) (-2147483647 - 1)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((long long int) var_0)), (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) var_12)) + (((/* implicit */int) var_8))))))) : (var_10)));
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned long long int) var_3);
        arr_11 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_1) < (arr_2 [i_3] [i_3])))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_13)) : (var_9))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (var_9) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_10)))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_12 [i_4]) : (arr_12 [i_4]))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39615))))))))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            arr_16 [i_4] [14U] [i_4] = ((/* implicit */signed char) arr_14 [i_4] [(unsigned char)14]);
            arr_17 [i_4] [i_4] [14] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) ^ (((long long int) arr_13 [i_4] [24]))));
            arr_18 [i_4] [i_4] [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39621)) ? (min((((/* implicit */long long int) var_3)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
            {
                arr_22 [(unsigned char)24] [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_6] [i_5])) ? (((/* implicit */long long int) min((arr_15 [i_6]), (arr_15 [i_6])))) : (min((((/* implicit */long long int) arr_13 [i_4] [i_5])), (arr_12 [i_6])))));
                arr_23 [i_4] [i_5] [19ULL] = ((/* implicit */signed char) ((((var_0) == (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1375899796U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39605)))))) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (!((_Bool)1))))))) : (var_9)));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((min((((var_4) ? (arr_21 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (91269331U)))))), (max((0ULL), (arr_21 [i_5] [i_5]))))))));
                arr_24 [i_4] [i_5] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10723))) : (14ULL))) + (max((((var_3) ? (13057502982656821256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) var_13))))));
                var_20 = ((/* implicit */_Bool) (~(((min((((/* implicit */unsigned long long int) var_7)), (13686749557280019778ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
            {
                arr_28 [i_4] = ((/* implicit */unsigned short) max((((unsigned long long int) arr_14 [i_7] [i_5])), (((/* implicit */unsigned long long int) var_3))));
                arr_29 [i_7] [11] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [0] [i_4]))) * (((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) var_2))))))));
                var_21 = ((/* implicit */unsigned short) ((var_5) ? (((((/* implicit */_Bool) (unsigned short)39608)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (var_13)))) : (((((/* implicit */_Bool) arr_21 [i_7] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_4] [i_7]) == (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_7]) < (var_10)))))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), (var_14)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_8)))) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))) : (((/* implicit */int) arr_19 [i_4] [i_4] [23U]))));
                arr_32 [i_4] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4])) >> (((((/* implicit */int) var_14)) + (66))))))))), ((~(((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (unsigned char)197))))))));
                arr_33 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_21 [i_5] [i_5]);
                arr_34 [i_4] [13ULL] [i_8] = ((/* implicit */unsigned short) arr_27 [24U] [4LL]);
            }
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_13))));
        }
        for (unsigned short i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_19 [i_4] [i_9] [i_10])) : (((/* implicit */int) (unsigned short)14127)))), (((((/* implicit */_Bool) (unsigned short)6351)) ? (((/* implicit */int) (unsigned char)0)) : (215982454)))))), (min((91269331U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                arr_40 [i_4] [i_10] [i_4] = min((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (short)32738))))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)6342)) : (((/* implicit */int) (unsigned short)6367)))))), ((~(((/* implicit */int) (_Bool)0)))));
            }
            arr_41 [i_4] [i_9] [i_4] = ((/* implicit */int) (+(((arr_20 [18ULL] [18ULL] [i_9 + 1]) << (((arr_20 [12] [i_4] [i_9 - 2]) - (17027786276084252230ULL)))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_25 = -1260158313;
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59184)) ? (((/* implicit */int) (unsigned short)50153)) : (-2087989869)))) ? (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_12] [i_11] [i_11] [i_12]))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54812)))))) : (arr_31 [(_Bool)1] [i_12] [(_Bool)1]))))))));
        }
        for (short i_13 = 4; i_13 < 13; i_13 += 2) 
        {
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_11))));
            arr_51 [i_11] [i_13] [i_11] = max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_7)) >= (arr_48 [i_11])))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (arr_26 [i_11]))))))), (((unsigned int) arr_30 [i_13 + 2] [i_13 - 2] [i_13 - 2] [i_13])));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_6))), (((/* implicit */long long int) arr_3 [i_13]))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11] [i_13]))) * (arr_31 [(_Bool)0] [i_11] [i_11]))) / ((+(arr_37 [22ULL] [i_11] [i_13]))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (var_1))))))))));
            arr_52 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)80)), ((short)(-32767 - 1))))), (min(((~(arr_2 [3ULL] [3ULL]))), (arr_14 [i_11] [i_13 - 3])))));
        }
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_60 [i_11] [i_14] [i_15] [(unsigned char)9] = (+(((/* implicit */int) ((var_1) >= (((/* implicit */long long int) arr_15 [i_15]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_64 [(unsigned char)1] [(unsigned char)3] [(unsigned char)1] [(unsigned char)1] [i_17] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)106))))), (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (var_11)))), (13895204569156120279ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_59 [i_11] [i_14])))))));
                            arr_65 [i_11] [i_16] [i_11] [i_11] [i_17] [i_14] [i_16] = ((/* implicit */long long int) arr_0 [i_15] [i_15]);
                            arr_66 [i_11] [i_11] [i_17] [i_16] [i_16] [i_17] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_4 [i_11] [i_14] [i_14] [i_14]), (((/* implicit */unsigned char) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) (unsigned short)11160)) < (((/* implicit */unsigned long long int) min((arr_56 [i_15]), (((/* implicit */int) arr_43 [i_11]))))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_13)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [i_16]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (3446280038U)))))));
                            arr_67 [i_11] [i_14] [i_14] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3901643411U)) / (14ULL)));
                        }
                        arr_68 [i_14] [i_14] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_11] [i_11] [i_14] [i_15])), (arr_43 [i_11])))) ? ((+(17057768232352176215ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_11] [i_15] [i_14] [i_11])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [i_11] [i_11]))))))));
                    }
                } 
            } 
            arr_69 [i_11] [8] [8] = min((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-126))))) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (var_0))), (min((((/* implicit */unsigned long long int) (+(var_1)))), (((((/* implicit */_Bool) 3971123042320118320LL)) ? (var_0) : (((/* implicit */unsigned long long int) 0U)))))));
            arr_70 [i_14] = ((/* implicit */_Bool) (-(((arr_38 [i_11] [i_11] [i_14] [i_14]) + (arr_44 [i_11])))));
        }
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((arr_21 [i_11] [i_11]) << (((arr_21 [i_11] [i_11]) - (12986145869254496527ULL))))), ((~(arr_21 [i_11] [i_11]))))))));
    }
}
