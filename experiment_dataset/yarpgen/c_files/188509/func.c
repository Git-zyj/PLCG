/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188509
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15))))))));
        var_21 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((min((arr_3 [i_1]), (((/* implicit */short) (signed char)-72)))), (((/* implicit */short) (_Bool)1)))))));
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)4]))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_4 [i_2]), (arr_4 [i_2]))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-41))))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                {
                    var_26 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) + (min((0ULL), (((/* implicit */unsigned long long int) var_19)))))) / (((/* implicit */unsigned long long int) ((((arr_6 [i_4 + 1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_3 [i_4 + 3])) - (32036))))))));
                    arr_12 [i_4] [i_3] [i_4 - 1] = ((/* implicit */int) ((((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) / (2309495967641440593LL)))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), (min((var_2), (((/* implicit */long long int) var_19))))));
                    var_28 = (!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)19711)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_3])) : (var_12)))))));
                    var_29 = ((/* implicit */short) arr_7 [i_3]);
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (arr_8 [i_5] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)83))))) * (((/* implicit */long long int) ((((/* implicit */int) var_13)) / (var_8))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_2)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) * (var_1))))) : (((min((var_1), (((/* implicit */unsigned long long int) var_15)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_26 [i_5] [i_6] [i_7] [i_8] [i_9] [0] = ((/* implicit */signed char) var_5);
                                var_31 = ((/* implicit */unsigned int) (unsigned short)52379);
                                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max((0U), (((((/* implicit */_Bool) var_9)) ? (arr_16 [i_6 - 2] [i_9 + 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45824)) ? (((/* implicit */int) (signed char)-41)) : (var_12)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) (~(min((237296167U), (((/* implicit */unsigned int) (signed char)-116))))));
        arr_27 [6LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_5])) <= (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) : (arr_0 [(unsigned short)7] [i_5]))))))));
    }
    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 2) 
        {
            for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 2; i_14 < 23; i_14 += 3) 
                        {
                            var_34 = ((signed char) (signed char)-1);
                            var_35 += ((/* implicit */unsigned short) min(((-(arr_30 [0U]))), ((+(arr_30 [0U])))));
                            var_36 = ((/* implicit */_Bool) (+(2939964335U)));
                        }
                        var_37 = ((/* implicit */signed char) (-(min((((/* implicit */int) arr_33 [i_10] [i_11] [i_10])), (1611346234)))));
                        arr_44 [i_10] [i_11] [i_13] [i_13] = ((/* implicit */_Bool) arr_36 [2] [(unsigned char)8] [i_13]);
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) arr_33 [i_10] [i_10] [i_10])) : (((/* implicit */int) ((((/* implicit */int) (signed char)115)) > (((/* implicit */int) var_15)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_37 [i_10] [4U] [i_10])), (var_1)))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_10)) : (var_1))) : (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
    {
        var_39 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_19)), (((((/* implicit */int) arr_41 [(_Bool)1] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) | (((/* implicit */int) arr_37 [(signed char)10] [i_15] [i_15]))))));
        var_40 = max((((/* implicit */unsigned int) (+((-2147483647 - 1))))), (var_10));
    }
    for (int i_16 = 2; i_16 < 17; i_16 += 3) 
    {
        var_41 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_1 [i_16] [i_16])))) ? (max((((/* implicit */int) var_18)), (2147483647))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)115))))))), (min((((/* implicit */long long int) -2147483647)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_2)))))));
        var_42 = ((/* implicit */_Bool) max((var_42), ((_Bool)1)));
        arr_51 [i_16] [i_16] = ((/* implicit */_Bool) (((~(arr_38 [(unsigned short)14] [i_16 + 1] [i_16]))) >> (((arr_38 [i_16 - 1] [i_16 - 2] [i_16]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_16 - 1] [i_16] [i_16])))))));
        var_43 += ((/* implicit */unsigned int) var_4);
        var_44 += ((/* implicit */signed char) max((((unsigned int) (+(1982221662428216031LL)))), (max((((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned char) arr_11 [(signed char)2] [i_16] [i_16]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_17)))))));
    }
    var_45 = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) <= (var_8))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))));
    var_46 = min((min((((((/* implicit */_Bool) (unsigned short)45824)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))), (max((((/* implicit */unsigned int) 2147483647)), (var_10))))), (((/* implicit */unsigned int) var_3)));
    /* LoopNest 2 */
    for (unsigned short i_17 = 2; i_17 < 9; i_17 += 2) 
    {
        for (unsigned int i_18 = 2; i_18 < 11; i_18 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 8; i_19 += 3) 
                {
                    for (int i_20 = 2; i_20 < 10; i_20 += 4) 
                    {
                        {
                            arr_62 [(_Bool)1] [i_18] [i_19] [i_20] [i_17 + 3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_34 [i_17] [i_19] [i_20])), (min((((((/* implicit */_Bool) arr_13 [i_17])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28672))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) var_0)))))))));
                            var_47 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19))))), (arr_31 [16LL] [i_17])));
                        }
                    } 
                } 
                arr_63 [(signed char)11] [8U] = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-965))))))), (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_5 [i_17] [i_18])), (var_9)))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_5 [4U] [i_17])), (var_18)))) : (((/* implicit */int) ((unsigned char) arr_32 [i_17] [0U] [i_18])))))));
            }
        } 
    } 
}
