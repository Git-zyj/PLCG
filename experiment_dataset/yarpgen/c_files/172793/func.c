/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172793
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(-2049562969)));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned long long int) (~((~(2288463378U)))));
                            var_15 = ((/* implicit */long long int) (~(2006503917U)));
                        }
                    } 
                } 
            } 
            arr_12 [i_0] = ((/* implicit */unsigned int) (+(-1186852495)));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((-2049562991) >= (-2049562961)));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_17 [i_5] = ((/* implicit */signed char) 2288463379U);
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                        arr_26 [i_7] [i_7] [i_6] [i_5] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        }
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(2006503939U)))))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_1)) : (((-1186852495) - (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((short) 2288463379U)))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_8] [i_9] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((/* implicit */int) ((_Bool) 2564974292119725840LL))) : ((~(((/* implicit */int) var_6))))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28398)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-548))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) - (var_3)))) ? ((-(((/* implicit */int) (unsigned char)192)))) : ((-(2049562968)))))) : (max(((~(var_13))), (9223198785292477605LL)))));
            var_18 *= ((/* implicit */short) -8059096884341277358LL);
            arr_32 [i_8] = (((+(((/* implicit */int) var_4)))) / ((-(((/* implicit */int) (short)1838)))));
        }
        var_19 &= ((/* implicit */unsigned char) min((((2564974292119725816LL) << (((6U) - (6U))))), ((((_Bool)0) ? (-6906687539785437096LL) : (-2564974292119725841LL)))));
        var_20 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) 134159749860572438LL)))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)212))))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 3; i_12 < 13; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            {
                                arr_47 [i_8] [i_10] [i_8] [i_12] [i_13] = ((/* implicit */long long int) 16769024);
                                arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (((+(-2046477543168590546LL))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2006503916U))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)212))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 14; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                arr_54 [i_15] [i_15] [i_15] [i_15] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2623569816361164571LL)) || (((/* implicit */_Bool) 2288463379U)))) && (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)212))))));
                                arr_55 [i_8] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) min((2006503898U), (2288463379U))));
                            }
                        } 
                    } 
                    arr_56 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15865317590275617588ULL)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (unsigned char)59))));
                }
            } 
        } 
    }
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_17 = 1; i_17 < 17; i_17 += 1) 
        {
            arr_62 [i_17] [i_17] [i_16] = ((/* implicit */long long int) (~(min((var_8), (((/* implicit */unsigned int) (unsigned char)0))))));
            arr_63 [i_16] [i_16] [i_17] = ((_Bool) ((unsigned int) (short)24430));
            var_23 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) (signed char)111)) ? (2288463386U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) & (2006503916U)))))));
        }
        arr_64 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) -2049562972))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)76))))) : (max((468265133U), (((/* implicit */unsigned int) (unsigned char)194))))));
        var_24 = ((/* implicit */_Bool) (-(max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (112443939U))), (((/* implicit */unsigned int) (signed char)25))))));
        var_25 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(var_3)))), ((~(11787549911034276167ULL)))));
        arr_65 [i_16] [i_16] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 2288463386U)), (((27021597764222976ULL) * (16824070533760275451ULL)))));
    }
    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
    {
        arr_68 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) 18419722475945328640ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(4182523357U)))));
        var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)8587)) | (((/* implicit */int) (unsigned char)135))))));
        arr_69 [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) != (((/* implicit */int) (unsigned short)0)))))));
    }
    var_27 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (((((/* implicit */_Bool) 2288463386U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56378))) : (17309814837216815636ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_6)))))));
}
