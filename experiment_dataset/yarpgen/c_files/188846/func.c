/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188846
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */int) max(((unsigned char)195), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)31498)))))));
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)31497)))) ? (((/* implicit */int) (unsigned char)79)) : (((((/* implicit */_Bool) (unsigned short)64798)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-31412))))))) ? (((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (9223372036854775807LL))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            arr_12 [(signed char)0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 9223372036854775801LL))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) var_18)))))));
            var_20 = ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [(signed char)1]))))))) ? (((((var_1) & (var_1))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((-11) - (((((/* implicit */int) (signed char)13)) & (((/* implicit */int) (unsigned short)40217))))))));
            arr_13 [(short)3] [11U] [i_0] = ((var_9) / (((/* implicit */int) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) var_15))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(min((((-7225553136531280500LL) + (((/* implicit */long long int) -1961729924)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))))))))));
        }
        var_22 = ((/* implicit */unsigned char) var_12);
        arr_14 [(unsigned short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8)))) ? (((((((/* implicit */_Bool) (unsigned char)43)) ? (6802868877002982927ULL) : (var_10))) % (15858970924788370758ULL))) : (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-101)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
        var_24 = ((/* implicit */long long int) (signed char)-20);
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            arr_23 [(_Bool)1] [i_4] [i_3] = ((/* implicit */signed char) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_3] [(signed char)14] [i_4 + 2]))))));
            arr_24 [i_3] [i_4] = ((/* implicit */unsigned char) (signed char)-101);
            arr_25 [i_3] = ((/* implicit */unsigned int) var_7);
            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) > (9223372036854775793LL)));
        }
        /* LoopNest 3 */
        for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-118)) & (((/* implicit */int) (signed char)(-127 - 1)))))) | ((+(arr_16 [(_Bool)1]))))))));
                        arr_33 [i_3] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */long long int) ((signed char) (unsigned char)160));
                        arr_34 [i_3] [i_5] [i_3] = ((/* implicit */short) (signed char)-118);
                        arr_35 [i_3] [i_5] [i_5] [8ULL] [i_5 + 1] [(unsigned short)11] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [(short)16] [i_5] [(short)16]))) - (((((/* implicit */_Bool) -420588610)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_36 [i_3] [i_5] [(signed char)10] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 - 2] [i_3] [i_5 - 3]))) : (0U)));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_27 = ((/* implicit */int) max((var_27), (((((((/* implicit */_Bool) 523025665U)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_0))))));
            var_28 |= ((/* implicit */short) max((((((/* implicit */long long int) 1901934140)) + (((((/* implicit */_Bool) (unsigned char)0)) ? (6280011071153587193LL) : (((/* implicit */long long int) -420588592)))))), (((/* implicit */long long int) ((unsigned char) var_18)))));
        }
        arr_41 [i_8] [i_8] = max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-55))))) ? ((+(arr_26 [i_8] [(unsigned short)4] [(short)2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31498)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65531))))))), (((/* implicit */unsigned long long int) var_4)));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) 919556183)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : ((-(var_13))))))));
    var_30 = ((/* implicit */long long int) var_4);
    var_31 = ((/* implicit */_Bool) 14401071472467919608ULL);
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 3; i_12 < 15; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((short)-32100), (((/* implicit */short) (signed char)114))))) || ((_Bool)1)))) : (((/* implicit */int) var_15)))))));
                                var_33 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63030))) : (var_13)))))));
                                arr_54 [3] [3] [i_12] [3] [i_14] [i_12 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_14)) / (((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 3; i_15 < 15; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            {
                                arr_62 [i_10] [i_10] [i_10] [i_12] [(unsigned short)7] [i_10] [(short)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_34 ^= ((/* implicit */unsigned long long int) ((((max((8458236373069074390LL), (((/* implicit */long long int) (unsigned char)6)))) / (((/* implicit */long long int) (-(var_13)))))) == (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                                arr_63 [(unsigned short)4] [i_11] [i_12] [(unsigned short)4] [(short)4] [i_16] [i_16 + 1] = ((/* implicit */signed char) arr_22 [i_12] [i_11] [i_12]);
                            }
                        } 
                    } 
                    arr_64 [i_12] [i_12] = ((/* implicit */unsigned char) ((((unsigned long long int) (short)-20033)) + (((/* implicit */unsigned long long int) 8458236373069074409LL))));
                }
            } 
        } 
    } 
}
