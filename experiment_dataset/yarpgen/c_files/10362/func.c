/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10362
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (~(-1186995208065761813LL)));
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_11)) + (36)))))) <= (2633605304871224541ULL))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 3]))) : (var_10)))), (((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)3272)) - (3272))))))) : (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)62278)))) >= (((/* implicit */int) var_8))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) (-(arr_3 [i_1 - 1] [i_0 + 3])));
            var_18 = ((/* implicit */signed char) var_8);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) ((var_6) ? (4503599625273344LL) : (((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 4] [i_0 + 2]))));
            var_20 = arr_8 [i_0 + 4];
            var_21 = ((/* implicit */_Bool) ((long long int) arr_1 [(short)6] [i_2 - 1]));
            var_22 = ((/* implicit */long long int) (short)-6416);
        }
    }
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((max((arr_3 [i_3] [i_3]), (((/* implicit */unsigned int) arr_11 [i_3 + 1])))), (((/* implicit */unsigned int) (unsigned short)62247))))) & ((~(2633605304871224532ULL)))));
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (((((int) arr_2 [i_3 + 4] [i_3])) - (((((/* implicit */int) arr_1 [i_3 + 4] [i_3 + 4])) | (((/* implicit */int) var_9))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) (+((-(var_3)))));
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((arr_0 [i_4] [i_4]) || (((/* implicit */_Bool) var_11)))), (((_Bool) var_3)))))) & ((~((-(var_2)))))));
            var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 1]))) <= (arr_3 [i_4 + 3] [i_4 + 3])))), (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 3])))))));
            var_28 = ((/* implicit */_Bool) 4589143488691345041LL);
            var_29 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62217)))))) ? (arr_10 [9]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-118)))))), (((/* implicit */long long int) (~(((var_12) << (((((/* implicit */int) (signed char)113)) - (99))))))))));
        }
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2633605304871224552ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3635765907U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)448)))));
                        var_31 = ((unsigned char) max((((/* implicit */unsigned char) (signed char)-33)), (arr_5 [i_6])));
                        var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((short)-11458), (((/* implicit */short) (unsigned char)15))))), (arr_3 [i_7] [i_6 - 1])));
                        arr_25 [(unsigned short)3] [10U] [i_6] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (short)-18866)), (-3345926606753585895LL)))));
                        var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), (arr_2 [(_Bool)1] [(_Bool)1])));
                    }
                } 
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */_Bool) 1006921803U)) ? (11321246695764419158ULL) : (((/* implicit */unsigned long long int) -4503599625273344LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) (signed char)-100))))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_13))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
}
