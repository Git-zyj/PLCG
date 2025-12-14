/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126935
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_3 [(short)4] [(short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-33)) && (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((((_Bool)0) ? (arr_0 [i_0] [i_0 - 2]) : (arr_0 [i_0] [(unsigned char)5]))))))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -2147483629)) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 - 1])) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (arr_0 [i_0 - 3] [i_0 - 2])))) : (max((((/* implicit */long long int) ((signed char) arr_1 [i_0]))), (((((/* implicit */_Bool) (signed char)114)) ? (904993869089216097LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_13 = ((/* implicit */unsigned char) ((max((arr_0 [i_0] [i_0 - 2]), (arr_0 [i_0] [i_0 - 2]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = min(((+(arr_4 [i_2] [i_0 - 3]))), (((/* implicit */int) (short)1125)));
                    arr_9 [(short)6] [i_1] [4U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */int) (short)20210)) : (arr_4 [i_0] [i_0 - 3])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (arr_10 [i_3]) : (-1)));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) 2973932331001139868LL)) ? (1446625918821722660LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))));
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 4; i_4 < 9; i_4 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_4 + 2]))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_5]);
                arr_22 [i_4] [i_5] [i_6] |= ((/* implicit */short) ((_Bool) arr_15 [i_4 + 2] [(signed char)4]));
                arr_23 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [(_Bool)0])))) > (arr_19 [(signed char)1] [i_5] [i_4 - 3])));
            }
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            arr_26 [i_7] = var_8;
            arr_27 [(short)6] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_4 - 3] [i_4 - 3]), (((/* implicit */unsigned char) arr_14 [i_4 - 2] [i_7]))))) ? (((arr_10 [(_Bool)0]) << (((((((/* implicit */int) (short)-6585)) + (6603))) - (17))))) : (((((/* implicit */int) arr_14 [i_4 - 1] [i_7])) << (((/* implicit */int) arr_11 [i_4 - 2] [i_7]))))));
            arr_28 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_10 [(unsigned short)0])))) ? (min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_7])) ? (var_8) : (-4498279000976248287LL))))) : (((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)0)), (arr_0 [i_4] [i_4]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))))))));
        }
        var_18 += ((/* implicit */unsigned char) min((33554431LL), (-9223372036854775798LL)));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_19 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((var_8) / (-2657706660231119395LL)))))), (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) min((arr_35 [(_Bool)1]), (((/* implicit */unsigned int) arr_2 [i_8 - 2]))))) : (max((6862123943415383373ULL), (((/* implicit */unsigned long long int) var_9))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_44 [i_12] [i_9] [0LL] |= ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) : (arr_7 [i_11] [i_8]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8 - 2])))))), (max((((/* implicit */long long int) arr_31 [i_10 + 1])), (-2118638195437346402LL)))));
                                arr_45 [i_9] [(_Bool)1] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)40878)))))) ? (5742720070041844306LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))));
                                arr_46 [i_12] [i_9] [i_12] = ((/* implicit */short) (+((+(((/* implicit */int) arr_37 [i_10 + 2] [i_10 + 2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        arr_50 [i_9] [i_9] [i_10] [i_13] [i_9] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_0 [i_9] [i_10])) ? (arr_2 [i_8]) : (((/* implicit */int) (signed char)-8)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)255)))))), ((+(((/* implicit */int) max((var_10), (var_10))))))));
                        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_3)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-109)), (var_5)))) : (((/* implicit */int) arr_41 [i_9] [i_13 + 1]))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (0ULL)))))));
                        var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)14588)) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153))) * (arr_5 [i_10]))))) : (max((((((/* implicit */int) arr_31 [i_10])) & (((/* implicit */int) (unsigned short)7)))), (min((((/* implicit */int) arr_29 [(_Bool)1] [(unsigned char)1])), (-1801322537)))))));
                    }
                    for (short i_14 = 1; i_14 < 11; i_14 += 4) 
                    {
                        arr_53 [i_9] [i_8] [i_9] [i_10 + 2] [i_14] = ((short) ((long long int) -6435046258226973799LL));
                        var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40866))));
                    }
                    var_23 = ((((/* implicit */_Bool) (signed char)-108)) ? (7606623749037601410LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_39 [i_9] [i_10 + 2] [i_10] [i_8]), (arr_39 [i_9] [i_10 + 2] [i_9] [i_10])))) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8]))) <= (arr_48 [i_8] [i_9] [i_9])))) << (((((/* implicit */int) min((arr_43 [i_8] [i_8 - 3] [i_9] [i_10]), (((/* implicit */short) arr_31 [i_9]))))) + (22203))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_8 + 2])))))));
                }
                arr_54 [(unsigned short)4] [i_8 + 2] [(unsigned short)4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (signed char)14)))))) ? (((max((((/* implicit */unsigned long long int) 4812831743330915154LL)), (12067493920149622742ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)235))))))) : (((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) (short)-12050)))) + (12088))) - (38))))))));
                arr_55 [i_9] [i_9] = ((/* implicit */short) min((5647099475155063289LL), (((/* implicit */long long int) (signed char)-107))));
            }
        } 
    } 
}
