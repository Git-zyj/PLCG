/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186177
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21205)) ? (((/* implicit */int) (unsigned short)21200)) : (((/* implicit */int) (_Bool)1))))) + (min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_2 + 2])))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (short)18971)) | (((/* implicit */int) (_Bool)1)))))))));
                        var_13 *= ((/* implicit */_Bool) arr_6 [i_1 - 1] [20ULL] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(signed char)4] [i_1 - 1] [i_1 - 1])) - (((((/* implicit */int) (short)-7648)) - (((/* implicit */int) (short)18958))))))) + ((+((+(10ULL)))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned short)4])) << (((((/* implicit */int) (short)-13230)) + (13253))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min(((unsigned short)44336), (((/* implicit */unsigned short) (short)32256))))))) : (((((/* implicit */_Bool) max((arr_9 [i_1]), (((/* implicit */short) (_Bool)1))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        var_15 *= ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) (short)-30378)) ? (var_5) : (((/* implicit */int) var_8)))))) / (((/* implicit */int) (unsigned short)21207))));
                        arr_16 [i_0] [i_1 + 1] [i_2 - 1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-8352)))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) 103287930U);
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((unsigned long long int) (!(((/* implicit */_Bool) (short)30375))))))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) (short)-13246);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_19 = ((((/* implicit */int) arr_4 [8])) & (var_5));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            var_20 = ((/* implicit */_Bool) (unsigned short)50880);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4225))) & ((-(2096640U)))));
            arr_26 [i_7] [i_7] [i_7] |= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_7] [i_8]))))));
        }
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)39)))))));
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_7] [i_7] [i_7]))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) (short)-6253);
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((((/* implicit */int) (unsigned char)150)) - (142))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] [i_10] = ((/* implicit */signed char) (~((-((-(var_3)))))));
        var_26 = ((/* implicit */short) (((~(((/* implicit */int) arr_7 [i_10] [i_10])))) ^ ((~(((/* implicit */int) arr_7 [i_10] [i_10]))))));
        var_27 = ((/* implicit */unsigned int) ((((var_9) * ((+(2096640U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)21206)))))))))));
        arr_32 [i_10] = ((/* implicit */unsigned short) 0ULL);
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
    {
        var_28 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)52989))));
        var_29 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-32762))))));
    }
    var_30 = ((/* implicit */short) (~(1575050764700983013ULL)));
}
