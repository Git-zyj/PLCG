/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17656
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
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        var_16 -= ((/* implicit */signed char) ((unsigned int) var_6));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (-(var_2))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_1] [i_2 + 2] [10U] [10U])) ? (var_6) : (((/* implicit */int) (signed char)7)))), (min((var_13), (((/* implicit */int) arr_7 [i_1] [i_2 + 1]))))));
                    arr_10 [i_2] [i_2 + 3] [(short)5] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)4341)) ? (((/* implicit */int) (short)-4339)) : (((/* implicit */int) (short)-4342)))), (max((((/* implicit */int) (unsigned short)28752)), (var_15)))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-19475)) ? (((/* implicit */unsigned long long int) 2147483647)) : (5546415549329210661ULL))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_5)) : (var_10))) : (var_10))) - (17597))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_4 [i_1]))));
                        var_20 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)28752)), ((+(min((((/* implicit */unsigned int) 0)), (arr_5 [i_5])))))));
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) 7);
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    {
                        arr_31 [i_7] [i_7] [19] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1382532543U)) ? (((/* implicit */int) (unsigned short)11006)) : (((/* implicit */int) (unsigned short)54524))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((arr_20 [6]) + (-20084725))) : (((arr_27 [i_7] [i_8] [7ULL]) ? (((/* implicit */int) (short)13449)) : (((/* implicit */int) (short)13454)))))))));
                        arr_32 [i_7] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */short) (+(max((3937372115U), (1382532543U)))));
                        arr_33 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((max((var_12), (var_10))) == (((((/* implicit */_Bool) arr_26 [i_7] [i_8])) ? (((/* implicit */int) (short)-13450)) : (((/* implicit */int) (short)(-32767 - 1)))))))) : (((/* implicit */int) ((unsigned short) arr_27 [i_9 + 2] [i_9 + 2] [i_9 + 2])))));
                    }
                } 
            } 
        } 
        arr_34 [i_7] = min((((/* implicit */int) min(((unsigned short)61402), (((/* implicit */unsigned short) (short)-4331))))), (-173245513));
        arr_35 [i_7] = ((/* implicit */int) (((((-(((/* implicit */int) arr_26 [i_7] [i_7])))) > (var_10))) ? (((((/* implicit */_Bool) 2912434753U)) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -1759786364)) : (-5189512986289294169LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 231109802)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9249))) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_28 [i_7] [i_7]) : (var_15)))))))));
    }
    for (int i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
    {
        arr_38 [i_11] [i_11] = 1759786364;
        var_22 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) (unsigned short)14510)), (((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [i_11] [6])))))))));
        arr_39 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned int) 1759786368))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4331))) : (arr_21 [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_11])) ? (((/* implicit */int) ((var_6) <= (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) -1231429079)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (0) : (arr_28 [i_11] [i_11])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-115))))) : (((/* implicit */long long int) max((1048575), (0))))))));
        var_23 |= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)31)), (((((/* implicit */_Bool) 0)) ? (24) : (((/* implicit */int) arr_26 [i_11] [i_11]))))));
    }
    var_24 = ((((/* implicit */_Bool) 17380102)) ? (((/* implicit */long long int) ((min((0), (-830637904))) / (((int) (short)-4331))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_15)) : (((long long int) var_4)))));
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 24; i_12 += 3) 
    {
        for (unsigned char i_13 = 3; i_13 < 24; i_13 += 3) 
        {
            {
                arr_44 [i_12] [i_13 - 2] [17LL] = ((/* implicit */long long int) (signed char)26);
                arr_45 [i_12] [i_13] = ((/* implicit */long long int) var_8);
                var_25 *= ((/* implicit */signed char) 168769262);
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_5))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0), (((/* implicit */int) (unsigned short)7312))))) ? (-1514286624) : (((/* implicit */int) var_11))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_11)), (-6349586777631026381LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28740)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1789381685968321788LL)))))) * ((+(var_7)))))));
}
