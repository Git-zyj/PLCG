/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134620
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
    var_16 = ((/* implicit */int) ((((long long int) var_7)) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [4U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2587802272U)))) : ((+(arr_0 [i_0]))))) | (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
        var_18 = ((/* implicit */_Bool) ((unsigned short) ((int) arr_0 [i_0 - 1])));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) (_Bool)1))))) & (-3417346616227237313LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)95)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) (unsigned char)15)))))))))));
        var_19 = ((((((/* implicit */_Bool) -796060621)) ? (-9LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28330))))) < (((arr_0 [i_0 + 4]) & (arr_0 [i_0 + 3]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (0)))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_4 [i_5 + 1] [i_1 - 1])))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (10055402230207660292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))));
                            var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4] [i_2])) + (arr_14 [i_1] [i_2] [i_1] [i_4] [i_5])))), (((arr_7 [i_1]) >> (((arr_4 [i_2] [i_4]) - (3178605504459090210LL)))))))) ? (((/* implicit */long long int) (+(424108176)))) : ((+(((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) ^ (3LL))))));
                            arr_20 [i_5] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((unsigned int) (signed char)47))));
                        }
                    } 
                } 
            } 
            var_24 = (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])));
            var_25 = (+((+(9223372036854775794LL))));
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) (_Bool)0))))) >= ((+(((unsigned long long int) arr_12 [i_6] [i_1] [i_1] [i_1]))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) % (((int) arr_5 [i_1 - 1] [i_6]))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        arr_28 [i_1] [i_6] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1090582567U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4916625299365410981ULL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)1))))) : (((-7846587274338770750LL) / (((/* implicit */long long int) arr_14 [i_1] [i_6] [i_1] [i_8] [i_7]))))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) (short)19364)))) + (((((/* implicit */_Bool) (signed char)-14)) ? (arr_6 [i_7]) : (2147483647)))))) : ((+(arr_4 [i_1] [i_1 - 1])))));
                        var_28 *= ((/* implicit */long long int) (+((+(1469803400U)))));
                        arr_29 [i_1] [i_6] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_6])) ? (1420027854) : (((/* implicit */int) (signed char)8))))) ? ((+(arr_19 [i_1] [i_6] [i_7] [i_8] [i_6]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-19365)) <= (((/* implicit */int) (unsigned short)43349)))) ? (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) : (0U))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            arr_34 [i_1] [i_9] [i_9] = ((/* implicit */unsigned int) (+(((arr_23 [i_1]) ^ (((/* implicit */int) arr_5 [i_1] [i_9]))))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_1 - 1])) ? (arr_31 [i_1 - 1]) : (((/* implicit */long long int) 0U))));
            arr_35 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                {
                    arr_40 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) arr_17 [i_1] [i_1] [i_11] [i_10] [i_1])) / (((/* implicit */int) (unsigned short)36549))))) ? (((/* implicit */int) ((4916625299365410952ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) : ((+(arr_23 [i_1])))));
                    var_30 = ((/* implicit */_Bool) (+(739183525)));
                }
            } 
        } 
    }
}
