/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136683
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
    var_15 = ((/* implicit */unsigned long long int) -6LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) 144115188075855871ULL);
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29679)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35882))) : (-30LL))) & (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)35894)))) >> (((((((((/* implicit */int) (short)-31701)) + (2147483647))) << (((((/* implicit */int) (unsigned short)35894)) - (35894))))) - (2147451934))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */int) (unsigned short)255)) >> (((((/* implicit */int) (short)6690)) - (6665)))))));
                                var_19 -= ((/* implicit */unsigned char) (unsigned short)46033);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) / (3U)));
                    var_21 = ((/* implicit */unsigned char) ((((17LL) ^ (-4248789137136402851LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2016)))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    var_22 = ((/* implicit */long long int) 8923750227760751706ULL);
                    var_23 = ((/* implicit */short) -8519635540858441275LL);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (short i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29653)) % (((((/* implicit */int) (short)0)) | (((/* implicit */int) (unsigned short)29639))))));
                                var_25 = ((/* implicit */unsigned long long int) 5LL);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) (((((_Bool)1) ? (-6474256893415561344LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) + (((/* implicit */long long int) 3164086253U))));
                }
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 842392392U)) ? (7351400821915612695LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29654)))))) ? (((4939187741413093268ULL) * (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)128))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2048))) | (16681405384259829090ULL))) ^ (((((/* implicit */_Bool) (short)-16053)) ? (12844295230557728256ULL) : (12434461265518033172ULL)))))));
                var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0ULL) >> (((((/* implicit */int) (signed char)96)) - (76)))))) ? (((((((/* implicit */unsigned long long int) 0LL)) % (17987842601216530663ULL))) % (((/* implicit */unsigned long long int) 1266768880)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) == (((6012282808191518445ULL) << (((((/* implicit */int) (unsigned char)119)) - (113)))))))))));
            }
        } 
    } 
}
