/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123207
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) (signed char)-14);
            var_16 = ((/* implicit */unsigned short) (((+(var_8))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) < (7696581394432ULL)))))));
            arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) var_13)) ? (7350467122898635218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (1296196746U)));
                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_1)))));
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)23))));
            }
            arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-5785))))) : (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) (signed char)-14))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_20 = ((/* implicit */long long int) ((unsigned int) 1248562148));
                var_21 = ((/* implicit */short) (+(((/* implicit */int) (signed char)23))));
                arr_15 [(unsigned char)7] [(unsigned char)7] [i_0] = ((/* implicit */long long int) (~(1037281856U)));
                var_22 &= ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                var_23 = ((/* implicit */signed char) (unsigned short)65515);
                var_24 = ((/* implicit */unsigned short) (~(((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))));
            }
            for (unsigned short i_6 = 3; i_6 < 8; i_6 += 3) 
            {
                arr_23 [i_3] [i_0] = ((/* implicit */short) ((4546960915226379357ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8191)))));
                var_25 = ((/* implicit */long long int) (unsigned short)0);
                var_26 = ((/* implicit */unsigned long long int) (-(((var_12) | (((/* implicit */long long int) var_8))))));
            }
            var_27 = ((/* implicit */int) (((-(((/* implicit */int) (signed char)(-127 - 1))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (short)-32743)))))));
            var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-14419))));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned char)239))));
            arr_26 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) + (var_8)))));
        }
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (!((_Bool)1))))));
    }
    for (short i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 8; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    {
                        var_31 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))), (max((((/* implicit */long long int) 927054044U)), (var_12)))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (var_0)))) > ((+(((/* implicit */int) (short)-8171))))))) % ((-((~(((/* implicit */int) (short)4764))))))));
                        var_33 ^= ((/* implicit */unsigned int) min((((287948901175001088ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_34 = ((((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) * (((/* implicit */int) ((((/* implicit */long long int) var_8)) == (var_7)))));
                        arr_37 [i_8] [i_8] [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 590370970553347704ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (927054044U))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_35 = ((/* implicit */int) min((var_35), ((+(((((/* implicit */int) (unsigned short)40535)) & (((/* implicit */int) var_3))))))));
            var_36 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_14)), (min((2350523196933207319ULL), (((/* implicit */unsigned long long int) var_4))))));
            var_37 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32764))) > (562949936644096LL))))))), ((~((-(-5874301761812735653LL)))))));
        }
    }
    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (unsigned short)25003)), (var_13))) * (((/* implicit */unsigned long long int) (-(-5212078499043269363LL))))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)68))))) ^ (min((((/* implicit */long long int) (signed char)37)), (3349840526184212674LL))))) : (min((((((/* implicit */_Bool) -735754811560441337LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9118217267490296955LL))), (((/* implicit */long long int) (short)4764))))));
    var_39 = ((/* implicit */_Bool) var_12);
    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-25750)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (_Bool)0))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)64)), ((unsigned short)35449))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5874301761812735652LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))) > (((2350523196933207336ULL) | (((/* implicit */unsigned long long int) 4294967295U))))))))));
}
