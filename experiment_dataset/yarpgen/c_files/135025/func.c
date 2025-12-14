/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135025
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 -= 2979236939U;
        var_15 = ((/* implicit */signed char) 1315730357U);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 1315730356U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (2979236959U))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (signed char)127))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((((_Bool)0) ? (66584576) : (((/* implicit */int) (unsigned short)9278))))))), (arr_7 [(short)14]))))));
            var_19 = ((/* implicit */unsigned short) arr_8 [i_2]);
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_20 [(short)5] [i_1] = ((/* implicit */short) arr_1 [(unsigned char)2]);
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(12U)))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22553)) ? (((/* implicit */int) (unsigned short)47844)) : (((/* implicit */int) arr_9 [(signed char)9] [i_2] [i_2]))))), (((((/* implicit */_Bool) 8ULL)) ? (12355118808103242603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38078)))))))));
                            arr_21 [i_1] [i_1] [i_3 + 1] [i_2] [i_1] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_3])) >= (((((/* implicit */_Bool) ((arr_18 [i_1] [i_2] [i_1] [3] [i_5]) + (17113854484109739601ULL)))) ? (((/* implicit */unsigned long long int) (+(1315730336U)))) : (13ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_24 [(_Bool)1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)8190), ((unsigned short)0))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_21 -= ((/* implicit */signed char) ((2979236969U) <= (2979236960U)));
                        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [(unsigned short)3]))) == ((~(((((/* implicit */_Bool) 1315730348U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_7]))) : (4132287477U)))))));
                        var_23 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-22842), (((/* implicit */short) (signed char)-113))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40543))) / (12355118808103242603ULL))))))), (arr_17 [i_1] [i_2] [9] [i_7]));
                    }
                    var_24 = ((/* implicit */unsigned int) min((var_24), (2979236960U)));
                    var_25 = ((/* implicit */unsigned long long int) 3927118173U);
                    var_26 |= (!(((/* implicit */_Bool) 1315730335U)));
                }
            }
        }
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(1315730336U))) & (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)19), ((unsigned short)12940)))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)15426)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) arr_9 [i_1] [i_1] [(signed char)3]))))))) : (((((933179181U) >> (((18446744073709551611ULL) - (18446744073709551580ULL))))) >> (((((/* implicit */int) arr_19 [i_1])) + (116)))))));
        var_28 |= ((/* implicit */signed char) ((((/* implicit */int) ((max((1398417431U), (((/* implicit */unsigned int) (unsigned short)10676)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1]))))))))) << (((((/* implicit */int) (unsigned short)1829)) - (1816)))));
        arr_27 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [(unsigned short)12])) & (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1315730356U)))))))));
    }
    for (signed char i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-98)) | (((/* implicit */int) (signed char)119))))) ? (((/* implicit */int) (short)13395)) : (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned short)54860)) : (((/* implicit */int) (unsigned char)25))))))) ? (((((/* implicit */_Bool) (unsigned short)1240)) ? ((~(((/* implicit */int) (signed char)-119)))) : ((((_Bool)0) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)28618)))))) : (max((((((/* implicit */_Bool) (signed char)54)) ? (-2010408357) : (((/* implicit */int) (unsigned char)25)))), (((/* implicit */int) min((arr_2 [(_Bool)1]), ((unsigned short)52596))))))));
        var_30 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (unsigned char)107))))))));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) * (((((((/* implicit */_Bool) (unsigned short)50463)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (arr_7 [(unsigned char)10]))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)9))))))))))));
        var_32 = ((/* implicit */unsigned short) (unsigned char)25);
    }
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_9) - (((/* implicit */int) (signed char)4))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)-13395)), (var_8)))) : ((-(1315730388U))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7069938932364513096ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)31744))))) ? (1315730367U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (short)-13395))))))))))));
}
