/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121765
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) max(((short)20), ((short)20)));
        var_16 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) arr_0 [i_0])) - (arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-68)))))))))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                    var_17 = ((unsigned short) max((max((((/* implicit */unsigned long long int) var_7)), (arr_6 [i_0] [i_1] [i_1] [i_2]))), (arr_6 [i_1] [i_1] [i_1] [i_0])));
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [1LL] = ((/* implicit */short) arr_3 [i_0]);
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((int) arr_13 [i_0] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0])) | (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (arr_2 [i_3] [i_0])))))) : (max((arr_0 [i_0]), (min((((/* implicit */long long int) arr_13 [i_0] [i_3] [i_3])), (-1LL)))))));
            var_18 = ((/* implicit */unsigned short) max((((((((/* implicit */int) arr_7 [i_0] [i_3])) == (arr_12 [i_0] [i_0] [i_0]))) ? (arr_3 [i_0]) : (max((((/* implicit */unsigned int) (signed char)44)), (1159911305U))))), (((/* implicit */unsigned int) ((short) arr_7 [i_3] [i_0])))));
            arr_17 [i_0] [i_0] [(unsigned short)15] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_3]))) + (arr_6 [i_0] [i_3] [i_0] [i_3])))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) 1U);
            arr_20 [i_0] [i_4] = ((/* implicit */int) var_7);
            var_20 = ((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_4] [i_4])), (max((((/* implicit */int) arr_1 [i_0] [i_4])), (arr_13 [i_0] [i_0] [i_0])))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) ((unsigned char) var_8));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        }
        for (short i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            arr_25 [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((arr_24 [i_0]), (((/* implicit */long long int) arr_14 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_6 - 3] [i_0])))))));
            arr_26 [i_0] [i_6 - 1] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_22 [i_6] [i_0])) ? (((/* implicit */int) arr_23 [i_6] [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) (signed char)-117)), (((/* implicit */unsigned char) (signed char)-39))))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                arr_31 [i_7] [i_6 - 3] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_6 - 3] [i_7] [i_7]))))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_7] [(signed char)5] [i_6 + 2] [i_0]))) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_6] [i_7]))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_6 + 1] [i_0])) ? (((/* implicit */long long int) arr_12 [i_0] [i_6 + 2] [i_7])) : (((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */long long int) arr_3 [i_6])) : (arr_24 [i_6 - 1]))))) >> (((((0) ^ (((/* implicit */int) (signed char)-67)))) + (108))))))));
                var_24 = ((/* implicit */signed char) ((max((arr_1 [i_0] [i_6]), (arr_1 [i_6] [i_7]))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_6])))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_6 + 2]))))));
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (short)-32763)))));
                            var_26 = (-(((min((((/* implicit */long long int) var_1)), (arr_0 [i_0]))) >> ((((~(arr_37 [i_0] [i_6] [i_7] [i_8]))) + (1861937484))))));
                        }
                    } 
                } 
            }
        }
    }
    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
    var_28 = ((/* implicit */signed char) var_3);
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned short)65528)))) : (((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) (short)32763)))))));
    var_30 &= ((/* implicit */unsigned long long int) var_4);
}
